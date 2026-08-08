#!/usr/bin/env python3
"""
cdfg_events_to_csv.py -- AutoISA Direct-CI report generator (Task 6).

Turns two kinds of simulation output into CSV reports:

  1. Engine event trace: lines like
         [cdfg] ACCEPT  cyc=938 id=1 rd=13 op=DELAY lat=4
         [cdfg] DISPAT  cyc=939 id=1
         [cdfg] DONE    cyc=955 id=1 engine_lat=16
         [cdfg] RESULT  cyc=956 id=1
     (printed by cdfg_engine.sv when built with +define+CDFG_EVENT_TRACE; they
     land in the Verilator stdout captured in <test>.cv32a65x.log.iss)
     -> events.csv   (one row per event: event,cycle,hartid,id,rd,op,lat,engine_lat)
     -> latency.csv  (one row per job: op,lat,engine_lat,queue_wait,end_to_end)

  2. Overlap / distance-to-consumer sweep: the results[] array written by
     autoisa_direct_ci_overlap.S, read back from the commit trace via nm+grep.
     -> overlap.csv  (K, total_cycles) demonstrating T(K) ~ max(producer, K*scalar)

Usage:
  cdfg_events_to_csv.py events  <sim.log.iss> [events.csv] [latency.csv]
  cdfg_events_to_csv.py overlap <test.o> <commit-trace.log> [overlap.csv]

The commit-trace lines look like:  "mem 0x80001234 0x00000014"
"""
import argparse
import re
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

# [cdfg] ACCEPT  cyc=938 id=1 rd=13 op=DELAY lat=4
EV_RE = re.compile(
    r"\[cdfg\]\s+(ACCEPT|DISPAT|DONE|RESULT)\s+cyc=(\d+)\s+id=(\d+)"
    r"(?:\s+rd=(\d+))?(?:\s+op=(\w+))?(?:\s+lat=(\d+))?(?:\s+engine_lat=(\d+))?"
)
MEM_RE = re.compile(r"mem\s+0x([0-9a-fA-F]+)\s+0x([0-9a-fA-F]+)")


def parse_events(log_path):
    """Return (events_rows, jobs) from a sim log.

    events_rows: list of dicts (one per [cdfg] line).
    jobs: dict id -> {accept, dispat, done, result, engine_lat, op, lat, rd}.
    """
    events = []
    jobs = defaultdict(dict)
    with open(log_path, errors="replace") as f:
        for line in f:
            m = EV_RE.search(line)
            if not m:
                continue
            ev, cyc, jid, rd, op, lat, elat = m.groups()
            row = {
                "event": ev,
                "cycle": int(cyc),
                "id": int(jid),
                "rd": rd if rd else "",
                "op": op if op else "",
                "lat": lat if lat else "",
                "engine_lat": elat if elat else "",
            }
            events.append(row)
            key = {"ACCEPT": "accept", "DISPAT": "dispat",
                   "DONE": "done", "RESULT": "result"}[ev]
            jobs[int(jid)][key] = int(cyc)
            if op:
                jobs[int(jid)]["op"] = op
            if lat is not None:
                jobs[int(jid)]["lat"] = int(lat)
            if elat is not None:
                jobs[int(jid)]["engine_lat"] = int(elat)
            if rd:
                jobs[int(jid)]["rd"] = int(rd)
    return events, jobs


def cmd_events(args):
    events, jobs = parse_events(args.log)
    out_dir = Path(args.out_dir)
    out_dir.mkdir(parents=True, exist_ok=True)
    events_csv = out_dir / (args.events_csv or "events.csv")
    latency_csv = out_dir / (args.latency_csv or "latency.csv")

    with open(events_csv, "w") as f:
        f.write("event,cycle,hartid,id,rd,op,lat,engine_lat\n")
        for r in events:
            f.write(f"{r['event']},{r['cycle']},0,{r['id']},{r['rd']},"
                    f"{r['op']},{r['lat']},{r['engine_lat']}\n")
    print(f"[cdfg_report] wrote {len(events)} event rows -> {events_csv}")

    # per-job latency summary. The engine's `id` is the scoreboard transaction
    # id, which the core REUSES as instructions retire, so a dict keyed by id
    # alone would collide. Correlate via the ordered event stream: remember the
    # most recent ACCEPT for each id, and attribute each DONE's engine_lat to
    # that (op, lat).
    by_op = defaultdict(list)
    last_accept = {}  # id -> (op, lat, accept_cycle)
    for r in events:
        if r["event"] == "ACCEPT" and r["op"]:
            last_accept[r["id"]] = (r["op"], r["lat"], r["cycle"])
        elif r["event"] == "DONE" and r["engine_lat"] != "" and r["id"] in last_accept:
            op, lat, _ = last_accept[r["id"]]
            by_op[(op, lat)].append(int(r["engine_lat"]))
    with open(latency_csv, "w") as f:
        f.write("op,lat,engine_lat,queue_wait,end_to_end,n\n")
        for jid, j in sorted(jobs.items()):
            op = j.get("op", "?")
            lat = j.get("lat", "")
            eng = j.get("engine_lat", "")
            qw = (j["dispat"] - j["accept"]) if ("dispat" in j and "accept" in j) else ""
            e2e = (j["result"] - j["accept"]) if ("result" in j and "accept" in j) else ""
            f.write(f"{op},{lat},{eng},{qw},{e2e},1\n")
        # aggregated means
        f.write("# aggregated (op,lat,mean_engine_lat,n)\n")
        for (op, lat), vals in sorted(by_op.items(), key=lambda kv: (str(kv[0][0]), kv[0][1])):
            f.write(f"# {op},{lat},{sum(vals)/len(vals):.1f},{len(vals)}\n")
    print(f"[cdfg_report] wrote latency summary -> {latency_csv}")
    # brief stdout summary
    for (op, lat), vals in sorted(by_op.items(), key=lambda kv: (str(kv[0][0]), kv[0][1])):
        print(f"  {op:10s} lat={lat}  engine_lat mean={sum(vals)/len(vals):.1f}  n={len(vals)}")


def _symbol_addr(elf, symbol):
    nm = shutil_which_nm()
    res = subprocess.run([nm, "-n", str(elf)], capture_output=True, text=True)
    for line in res.stdout.splitlines():
        parts = line.split()
        if len(parts) >= 3 and parts[2] == symbol:
            return int(parts[0], 16)
    return None


def shutil_which_nm():
    riscv = Path("/home/tt/cva6toolchain")
    cand = riscv / "bin" / "riscv-none-elf-nm"
    if cand.exists():
        return str(cand)
    return "riscv-none-elf-nm"


def cmd_overlap(args):
    base = _symbol_addr(args.elf, args.symbol)
    if base is None:
        print(f"[cdfg_report] ERROR: symbol '{args.symbol}' not found in {args.elf}",
              file=sys.stderr)
        return 1
    # read up to args.count words from the commit trace at base, base+4, ...
    last = {}
    with open(args.trace, errors="replace") as f:
        for line in f:
            m = MEM_RE.search(line)
            if not m:
                continue
            addr = int(m.group(1), 16)
            val = int(m.group(2), 16)
            if base <= addr < base + 4 * args.count:
                last[addr] = val  # keep the last write (the stored delta)
    out_dir = Path(args.out_dir)
    out_dir.mkdir(parents=True, exist_ok=True)
    out = out_dir / (args.out_csv or "overlap.csv")
    # K labels mirror autoisa_direct_ci_overlap.S results[]
    k_labels = [0, 1, 2, 4, 8, 16, 32, "producer_only"]
    with open(out, "w") as f:
        f.write("index,K,total_cycles\n")
        for i in range(args.count):
            addr = base + 4 * i
            val = last.get(addr)
            k = k_labels[i] if i < len(k_labels) else i
            f.write(f"{i},{k},{val if val is not None else ''}\n")
    print(f"[cdfg_report] wrote overlap sweep -> {out}")
    for i in range(min(args.count, len(k_labels))):
        val = last.get(base + 4 * i)
        if val is not None:
            print(f"  K={k_labels[i]!s:>13}  T={val} cycles")
    return 0


def main():
    p = argparse.ArgumentParser(description=__doc__,
                                formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = p.add_subparsers(dest="cmd", required=True)
    pe = sub.add_parser("events", help="parse [cdfg] event lines -> events.csv + latency.csv")
    pe.add_argument("log", help="sim log (.log.iss) containing [cdfg] lines")
    pe.add_argument("events_csv", nargs="?", help="output events.csv name")
    pe.add_argument("latency_csv", nargs="?", help="output latency.csv name")
    pe.add_argument("--out-dir", default="results/autoisa_direct_ci")

    po = sub.add_parser("overlap", help="parse overlap results[] -> overlap.csv")
    po.add_argument("elf", help="test .o / .elf (for nm symbol lookup)")
    po.add_argument("trace", help="commit-trace .log (mem <addr> <val> lines)")
    po.add_argument("out_csv", nargs="?", help="output overlap.csv name")
    po.add_argument("--symbol", default="results")
    po.add_argument("--count", type=int, default=8)
    po.add_argument("--out-dir", default="results/autoisa_direct_ci")

    args = p.parse_args()
    if args.cmd == "events":
        cmd_events(args)
    elif args.cmd == "overlap":
        sys.exit(cmd_overlap(args))


if __name__ == "__main__":
    main()
