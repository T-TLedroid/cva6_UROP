#!/bin/bash
# Copyright 2024 CVA6 Cycle Count Test for CVXIF
#
# Test script to measure cycle counts for CVXIF instructions

if ! [ -n "$RISCV" ]; then
  echo "Error: RISCV variable undefined"
  return
fi

if ! [ -n "$DV_SIMULATORS" ]; then
  DV_SIMULATORS=veri-testharness,spike
fi

# install the required tools
if [[ "$DV_SIMULATORS" == *"veri-testharness"* ]]; then
  source ./verif/regress/install-verilator.sh
fi
source ./verif/regress/install-spike.sh

# setup sim env
source verif/sim/setup-env.sh

if ! [ -n "$UVM_VERBOSITY" ]; then
    export UVM_VERBOSITY=UVM_NONE
fi

export cvxif=1  # Enable CVXIF in Spike
export DV_OPTS="$DV_OPTS --issrun_opts=+debug_disable=1+UVM_VERBOSITY=$UVM_VERBOSITY"

echo "Running CVXIF Cycle Count Test..."
echo "Target: cv32a65x (with CVXIF support)"
echo "=============================================="

cd verif/sim/

# Run the cycle count test
python3 cva6.py \
    --testlist=../tests/testlist_cvxif.yaml \
    --test cvxif_cycle_count \
    --iss_yaml cva6.yaml \
    --target cv32a65x \
    --iss=$DV_SIMULATORS \
    --linker=../../config/gen_from_riscv_config/cv32a65x/linker/linker.ld \
    $DV_OPTS

cd -

echo ""
echo "Test complete. Check logs for results."
