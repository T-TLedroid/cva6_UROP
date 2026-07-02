# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

CVA6 is a 6-stage, single-issue, in-order RISC-V CPU core implementing:
- 64-bit RISC-V ISA (I, M, A, C extensions per Volume I: User-Level ISA v2.3)
- 32-bit variants (CV32A6) and 64-bit variants (CV64A6)
- Three privilege levels (M, S, U) for Unix-like OS support
- External debug spec 0.13 compliance
- Separate TLBs, hardware page table walker, and branch prediction

The project is part of the CORE-V ecosystem by OpenHW Foundation.

## Essential Setup

**Before any development, set up the environment:**

```bash
# Set RISCV toolchain path (toolchain pre-built at /home/tt/cva6toolchain)
export RISCV=/home/tt/cva6toolchain

# Source setup script (sets paths for tools)
source verif/sim/setup-env.sh

# Install Python dependencies for verification
pip3 install -r verif/sim/dv/requirements.txt

# Set number of parallel jobs (optional)
export NUM_JOBS=4  # defaults to 1 if not set
```

## Common Commands

### Running Simulations

```bash
# Run a single test with Verilator
export DV_SIMULATORS=veri-testharness
cd verif/sim
python3 cva6.py --target cv32a60x --iss=$DV_SIMULATORS --iss_yaml=cva6.yaml \
    --c_tests ../tests/custom/hello_world/hello_world.c \
    --linker=../../config/gen_from_riscv_config/linker/linker.ld

# Run with Spike ISS for comparison (verifies against reference model)
export DV_SIMULATORS=veri-testharness,spike

# Run a C program with printf (requires RISC-V Proxy Kernel)
bash verif/regress/veri-testharness-pk-tests.sh
```

### Regression Tests

```bash
# Smoke tests (builds and runs initial verification)
export DV_SIMULATORS=veri-testharness,spike
bash verif/regress/smoke-tests.sh

# RISC-V compliance tests
bash verif/regress/dv-riscv-compliance.sh

# RISC-V architecture tests
bash verif/regress/dv-riscv-arch-test.sh

# Random instruction generation tests
bash verif/regress/dv-generated-tests.sh

# Coremark benchmark
bash verif/regress/coremark.sh
```

### Build Targets

```bash
# Verilator build
make verilate

# VCS build
make vcs_build

# Clean build artifacts
make clean
```

## Environment Variables

Key variables for simulation and testing:

- `RISCV` - Path to RISC-V toolchain (required)
- `DV_SIMULATORS` - Simulator(s) to use: `veri-testharness`, `vcs-testharness`, `vcs-uvm`, `spike` (default: `veri-testharness,spike`)
- `DV_TARGET` - Hardware configuration: `cv64a6_imafdc_sv39`, `cv32a60x`, `cv32a65x`, etc. (default: `cv64a6_imafdc_sv39`)
- `DV_TESTLISTS` - Test list YAML files to run
- `DV_OPTS` - Additional options passed to cva6.py
- `NUM_JOBS` - Number of parallel jobs for make
- `VERILATOR_INSTALL_DIR` - Path to Verilator installation
- `SPIKE_INSTALL_DIR` - Path to Spike installation

## Directory Structure

### Core CPU (`core/`)

The standalone CVA6 core RTL (no APU dependencies):

- **Pipeline Stages:**
  - `frontend/` - Instruction fetch, branch prediction (BTB, BHT, RAS)
  - `id_stage.sv` - Instruction decode
  - `issue_stage.sv` - Issue stage
  - `ex_stage.sv` - Execute stage (ALU, multiplier, divider)
  - `commit_stage.sv` - Commit stage

- **Functional Units:**
  - `alu.sv`, `mul_unit.sv`, `div_unit.sv` - Arithmetic units
  - `load_store_unit.sv` - Memory operations
  - `acc_dispatcher.sv`, `seri_engine.sv` - Accelerator interface
  - `cvfpu/` - Floating-point unit (using fpnew from cvfpu submodule)

- **Memory Management:**
  - `cva6_mmu/` - MMU, TLB, page table walker
  - `cache_subsystem/` - I-cache, D-cache, HPDcache
  - `pmp/` - Physical memory protection

- **Control:**
  - `csr_regfile.sv` - CSRs (large file ~127KB)
  - `controller.sv` - Control logic
  - `cva6.sv` - Top-level core module

### APU Platform (`corev_apu/`)

FPGA emulation platform with peripherals (UART, timer, PLIC, debug module).

### Verification (`verif/`)

- `sim/cva6.py` - Main simulation script
- `sim/dv/` - riscv-dv integration for random instruction generation
- `regress/*.sh` - 40+ regression test scripts
- `tests/` - Test sources (custom, compliance, arch-tests)
- `bsp/` - Board support package for test programs
- `tb/core/` - Testbench for standalone core
- `core-v-verif/` - Shared verification infrastructure (submodule)

### Configuration (`config/`)

- Hardware configurations managed via `riscv-config`
- Generated configs in `config/gen_from_riscv_config/`

### Tools (`util/`)

- `toolchain-builder/` - Build RISC-V GCC toolchain
- Various utility scripts

## Architecture Overview

**Pipeline Stages (6-stage, in-order):**
1. **Frontend** - Fetch with branch prediction (BTB, BHT, RAS)
2. **ID Stage** - Instruction decode
3. **Issue Stage** - Scoreboard and issue
4. **EX Stage** - Execute (ALU, multiplier, divider, LSU)
5. **Commit Stage** - Writeback and commit

**Key Interfaces:**
- AXI interface for memory (via `axi_shim.sv`)
- CVXIF (CORE-V eXtension Interface) for custom accelerators
- RVFI (RISC-V Formal Interface) probes for formal verification

**Configuration System:**
- Use `riscv-config` to generate hardware configurations
- Config packages in `core/include/` define parameters (XLEN, cache sizes, etc.)
- Target selection via `DV_TARGET` or Makefile `target` parameter

## Verification Approach

1. **Directed tests** - riscv-tests, riscv-compliance, riscv-arch-test suites
2. **Random tests** - riscv-dv generates random instruction sequences
3. **Comparison** - Spike ISS used as reference model for trace comparison
4. **UVM** - VCS UVM testbench with coverage (industrial verification)

Logs are written to `verif/sim/out_YEAR-MONTH-DAY/`.

## Code Style Notes

- SystemVerilog RTL in `core/`
- Uses `verible-verilog-format` for formatting
- Parameters preferred over `ifdef` for configuration
- Eclipse Contributor Agreement (ECA) required for contributions
- See `CONTRIBUTING.md` for contribution guidelines
