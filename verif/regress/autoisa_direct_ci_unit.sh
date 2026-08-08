#!/usr/bin/env bash
#
# autoisa_direct_ci_unit.sh -- run the cdfg_engine module-level unit testbench
# (commit/kill matrix, result backpressure, queue-full, randomized correctness).
#
# This is the only place the commit/kill and backpressure protocol behaviors
# can be exercised: the real CVA6 core drives commit_kill=0 and result_ready=1
# always, so they are validated by driving the engine directly here.
#
# Exit status: 0 = all TB cases passed, nonzero = build or case failure.
set -euo pipefail

REPO="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
cd "$REPO"

if [ ! -x tools/verilator-v5.008/bin/verilator ] && ! command -v verilator >/dev/null 2>&1; then
  echo "Error: verilator not found (expected tools/verilator-v5.008/bin/verilator)" >&2
  exit 1
fi

echo "=== AutoISA Direct-CI unit testbench (cdfg_engine) ==="
bash verif/tb/cvxif_cdfg/run.sh
