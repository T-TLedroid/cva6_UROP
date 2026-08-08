#!/usr/bin/env bash
#
# run_autoisa_direct_ci_all.sh -- the one documented command for AutoISA
# Direct-CI Phase-1 verification (AUTOISA_DIRECT_CI_TUTORIAL.md §13 reproducibility).
#
# Runs, in order:
#   1. the cdfg_engine module unit testbench (commit/kill matrix, backpressure,
#      queue-full, randomized correctness -- engine driven directly);
#   2. the directed + randomized + overlap tests through the full CVA6 core,
#      built with event instrumentation;
#   3. produces events.csv / latency.csv / overlap.csv reports.
#
# Exit status: 0 only if every unit case and every directed test PASSES.
set -o pipefail

[ -n "${RISCV:-}" ] || { echo "Error: RISCV variable undefined (export RISCV=/home/tt/cva6toolchain)"; exit 1; }

REPO="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
cd "$REPO"

echo "############################################################"
echo "# AutoISA Direct-CI Phase-1 verification"
echo "############################################################"

echo
echo "=== [1/2] module unit testbench ==="
if ! bash verif/regress/autoisa_direct_ci_unit.sh; then
  echo "FAILED: unit testbench"; exit 1
fi

echo
echo "=== [2/2] directed + randomized + overlap (full core) + CSV reports ==="
if ! bash verif/regress/autoisa_direct_ci.sh; then
  echo "FAILED: directed/regression"; exit 1
fi

echo
echo "############################################################"
echo "# ALL PHASE-1 VERIFICATION PASSED"
echo "# reports:"
ls -1 "$REPO"/results/autoisa_direct_ci/*.csv 2>/dev/null | sed 's/^/#   /'
echo "############################################################"
