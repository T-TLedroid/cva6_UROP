#!/usr/bin/env bash
#
# Self-contained Verilator build + run of the cdfg_engine unit testbench.
# Bypasses the main Makefile (which is built around ariane_testharness) by
# invoking verilator directly on a minimal fileset.
#
# Usage:
#   bash verif/tb/cvxif_cdfg/run.sh                 # default build, no event trace
#   DEFINES="+define+CDFG_EVENT_TRACE" bash verif/tb/cvxif_cdfg/run.sh
#
# The testbench exits nonzero ($fatal) on any failing case, so the script's exit
# status is the PASS/FAIL result.
set -euo pipefail

REPO="$(cd "$(dirname "${BASH_SOURCE[0]}")/../../.." && pwd)"   # repo root
cd "$REPO"

VL="${VERILATOR:-tools/verilator-v5.008/bin/verilator}"
OBJDIR="verif/tb/cvxif_cdfg/obj_dir"
DEFINES="${DEFINES:-}"

echo "[run.sh] building cdfg_tb with $VL"
# shellcheck disable=SC2086  # DEFINES intentionally word-split
"$VL" --timing --cc --exe --build -Mdir "$OBJDIR" \
    --top-module cdfg_tb \
    -f "$REPO/verif/tb/cvxif_cdfg/Flist.cdfg" \
    "$REPO/verif/tb/cvxif_cdfg/cdfg_tb.sv" \
    "$REPO/verif/tb/cvxif_cdfg/cdfg_tb_main.cpp" \
    $DEFINES \
    -Wno-UNUSED -Wno-WIDTH -Wno-DECLFILENAME -Wno-UNOPT -Wno-UNOPTFLAT -Wno-TIMESCALEMOD -Wno-LATCH -Wno-fatal

echo "[run.sh] running Vcdfg_tb"
"$OBJDIR/Vcdfg_tb"
