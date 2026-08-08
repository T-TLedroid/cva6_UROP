#!/usr/bin/env bash
#
# autoisa_direct_ci.sh -- run the Direct-CI directed + randomized + overlap tests
# through the full CVA6 core (Verilator, cv32a65x) and produce the event/latency
# and overlap CSV reports.
#
# Built with +define+CDFG_EVENT_TRACE so cdfg_engine.sv prints the per-job event
# lines that cdfg_events_to_csv.py turns into events.csv / latency.csv.
set -o pipefail

[ -n "${RISCV:-}" ] || { echo "Error: RISCV variable undefined (export RISCV=/home/tt/cva6toolchain)"; exit 1; }
[ -n "${DV_SIMULATORS:-}" ] || DV_SIMULATORS=veri-testharness
[ -n "${UVM_VERBOSITY:-}" ] || UVM_VERBOSITY=UVM_NONE
export UVM_VERBOSITY

REPO="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
cd "$REPO"
# toolchain must be on PATH for setup-env / cva6.py
export PATH="$REPO/tools/verilator-v5.008/bin:$PATH"
source verif/sim/setup-env.sh >/dev/null 2>&1

DV_OPTS="--issrun_opts=+debug_disable=1+UVM_VERBOSITY=$UVM_VERBOSITY"
TESTS="cvxif_mac cvxif_delay cvxif_cdfg_demo autoisa_direct_ci_correctness autoisa_direct_ci_overlap"

echo "=== AutoISA Direct-CI: directed + randomized + overlap (target cv32a65x) ==="
cd verif/sim
rc=0
for T in $TESTS; do
  python3 cva6.py --testlist=../tests/testlist_cvxif.yaml --test "$T" \
      --iss_yaml cva6.yaml --target cv32a65x --iss=$DV_SIMULATORS \
      --isscomp_opts="+define+CDFG_EVENT_TRACE" $DV_OPTS >/dev/null 2>&1 || true
  D=$(ls -td out_*/veri-testharness_sim 2>/dev/null | head -1)
  M=$(grep -hiE 'SUCCESS|FAILED \(tohost' "$D/$T.cv32a65x.log.iss" 2>/dev/null | tail -1 | grep -oiE 'SUCCESS|FAILED')
  M=${M:-"(no marker)"}
  printf "  %-32s %s\n" "$T" "$M"
  [ "$M" = "SUCCESS" ] || rc=1
done
DD=$(ls -td out_*/veri-testharness_sim | head -1)
cd "$REPO"

echo "=== generating CSV reports -> results/autoisa_direct_ci/ ==="
python3 verif/tests/custom/cv_xif/cdfg_events_to_csv.py events \
    "$REPO/verif/sim/$DD/cvxif_delay.cv32a65x.log.iss" \
    delay_events.csv delay_latency.csv
python3 verif/tests/custom/cv_xif/cdfg_events_to_csv.py events \
    "$REPO/verif/sim/$DD/cvxif_cdfg_demo.cv32a65x.log.iss" \
    cdfg_events.csv cdfg_latency.csv
O=$(ls -t verif/sim/out_*/directed_tests/autoisa_direct_ci_overlap.o 2>/dev/null | head -1)
if [ -n "$O" ]; then
  python3 verif/tests/custom/cv_xif/cdfg_events_to_csv.py overlap "$O" \
      "$REPO/verif/sim/$DD/autoisa_direct_ci_overlap.cv32a65x.log"
fi

echo "=== done (rc=$rc) ==="
exit $rc
