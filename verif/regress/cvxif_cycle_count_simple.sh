#!/bin/bash
# Copyright 2024 CVA6 Cycle Count Test for CVXIF
#
# Simple test script to measure cycle counts for CVXIF instructions

if ! [ -n "$RISCV" ]; then
  echo "Error: RISCV variable undefined"
  return
fi

if ! [ -n "$DV_SIMULATORS" ]; then
  DV_SIMULATORS=veri-testharness,spike
fi

# install the required tools
if [[ "$DV_SIMULATORS" == *"veri-testharness"* ]]; then
  source ./verif/regress/install-verilator.sh 2>&1 | tail -5
fi
source ./verif/regress/install-spike.sh 2>&1 | tail -5

# setup sim env
source verif/sim/setup-env.sh

if ! [ -n "$UVM_VERBOSITY" ]; then
    export UVM_VERBOSITY=UVM_NONE
fi

export cvxif=1  # Enable CVXIF in Spike
export DV_OPTS="$DV_OPTS --issrun_opts=+debug_disable=1+UVM_VERBOSITY=$UVM_VERBOSITY"

echo ""
echo "=============================================="
echo "CVXIF Cycle Count Test"
echo "=============================================="
echo "Target: cv32a65x (with CVXIF support)"
echo "Simulators: $DV_SIMULATORS"
echo ""

cd verif/sim/

# Run the cycle count test directly with c_tests flag
python3 cva6.py \
    --c_tests ../tests/custom/cv_xif/cvxif_cycle_count.c \
    --iss_yaml cva6.yaml \
    --target cv32a65x \
    --iss=$DV_SIMULATORS \
    --linker=../bsp/link.ld \
    --gcc_opts="-static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g ../tests/custom/common/syscalls.c ../tests/custom/common/crt.S -I../tests/custom/env -I../tests/custom/common -lgcc" \
    $DV_OPTS

echo ""
echo "=============================================="
echo "Test complete!"
echo "=============================================="

cd -
