#!/bin/bash
# CVXIF Cycle Count Test Runner
# Tests CVXIF coprocessor and measures cycles per instruction

if ! [ -n "$RISCV" ]; then
  echo "Error: RISCV variable undefined"
  exit 1
fi

# Set simulators
if ! [ -n "$DV_SIMULATORS" ]; then
  DV_SIMULATORS=veri-testharness,spike
fi

# Install tools
if [[ "$DV_SIMULATORS" == *"veri-testharness"* ]]; then
  source ./verif/regress/install-verilator.sh 2>&1 | tail -3
fi
source ./verif/regress/install-spike.sh 2>&1 | tail -3

# Setup environment
source verif/sim/setup-env.sh

# Set verbosity
if ! [ -n "$UVM_VERBOSITY" ]; then
    export UVM_VERBOSITY=UVM_NONE
fi

# Enable CVXIF in Spike
export cvxif=1
export DV_OPTS="$DV_OPTS --issrun_opts=+debug_disable=1+UVM_VERBOSITY=$UVM_VERBOSITY"

echo ""
echo "=============================================="
echo "CVXIF Cycle Count Test"
echo "=============================================="
echo "Target: cv32a65x (with CVXIF support)"
echo "Simulators: $DV_SIMULATORS"
echo ""

cd verif/sim/

# Run the cycle count test
python3 cva6.py \
    --testlist=../tests/testlist_cvxif.yaml \
    --test cvxif_cycle_count \
    --iss_yaml cva6.yaml \
    --target cv32a65x \
    --iss=$DV_SIMULATORS \
    $DV_OPTS

echo ""
echo "=============================================="
echo "Test Complete"
echo "=============================================="

cd -
