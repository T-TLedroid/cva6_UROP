// Copyright 2024 CVA6 Cycle Count Test for CVXIF
//
// Test to measure the number of cycles each CVXIF custom instruction takes
// to complete. Uses the mcycle CSR to measure cycle counts.

#include <stdint.h>
#include <stdio.h>

// CSR macros for reading performance counters
#define read_csr(csr) \
    ({ unsigned long __v; \
       asm volatile("csrr %0, " #csr : "=r"(__v)); \
       __v; })

// CVXIF instruction inline assembly macros
#define CUS_NOP() \
    asm volatile(".insn r CUSTOM_3, 0x0, 0x0, x0, x0, x0" ::: "memory")

#define CUS_ADD(rd, rs1, rs2) \
    asm volatile(".insn r CUSTOM_3, 0x1, 0x0, %0, %1, %2" \
                 : "=r"(rd) : "r"(rs1), "r"(rs2) : "memory")

#define CUS_DOUBLE_RS1(rd, rs1, rs2) \
    asm volatile(".insn r CUSTOM_3, 0x1, 0x1, %0, %1, x0" \
                 : "=r"(rd) : "r"(rs1) : "memory")

#define CUS_DOUBLE_RS2(rd, rs1, rs2) \
    asm volatile(".insn r CUSTOM_3, 0x1, 0x2, %0, x0, %1" \
                 : "=r"(rd) : "r"(rs2) : "memory")

#define CUS_ADD_MULTI(rd, rs1, rs2) \
    asm volatile(".insn r CUSTOM_3, 0x1, 0x3, %0, %1, %2" \
                 : "=r"(rd) : "r"(rs1), "r"(rs2) : "memory")

#define CUS_ADD_RS3_MADD(rd, rs1, rs2, rs3) \
    asm volatile(".insn r MADD, 0x0, 0x0, %0, %1, %2, %3" \
                 : "=r"(rd) : "r"(rs1), "r"(rs2), "r"(rs3) : "memory")

#define CUS_ADD_RS3_MSUB(rd, rs1, rs2, rs3) \
    asm volatile(".insn r MSUB, 0x0, 0x0, %0, %1, %2, %3" \
                 : "=r"(rd) : "r"(rs1), "r"(rs2), "r"(rs3) : "memory")

#define CUS_ADD_RS3_NMADD(rd, rs1, rs2, rs3) \
    asm volatile(".insn r NMADD, 0x0, 0x0, %0, %1, %2, %3" \
                 : "=r"(rd) : "r"(rs1), "r"(rs2), "r"(rs3) : "memory")

#define CUS_ADD_RS3_NMSUB(rd, rs1, rs2, rs3) \
    asm volatile(".insn r NMSUB, 0x0, 0x0, %0, %1, %2, %3" \
                 : "=r"(rd) : "r"(rs1), "r"(rs2), "r"(rs3) : "memory")

// Barrier to prevent compiler reordering
#define BARRIER() asm volatile("" ::: "memory")

// Number of iterations for each instruction test
#define ITERATIONS 1000

// Test function to measure cycles for a given instruction
struct cycle_result {
    const char *name;
    uint64_t total_cycles;
    uint64_t cycles_per_iteration;
};

void measure_cycles(void (*instr_func)(uint32_t*, uint32_t, uint32_t, uint32_t),
                    const char *name,
                    struct cycle_result *results,
                    int *index) {
    uint32_t result = 0;
    uint32_t rs1 = 0x10000000;  // Test value
    uint32_t rs2 = 0x20000000;  // Test value
    uint32_t rs3 = 0x30000000;  // Test value

    // Warm-up run
    for (int i = 0; i < 100; i++) {
        instr_func(&result, rs1, rs2, rs3);
    }

    // Measure cycles
    uint64_t start = read_csr(mcycle);
    for (int i = 0; i < ITERATIONS; i++) {
        instr_func(&result, rs1, rs2, rs3);
    }
    uint64_t end = read_csr(mcycle);

    results[*index].name = name;
    results[*index].total_cycles = end - start;
    results[*index].cycles_per_iteration = (end - start) / ITERATIONS;
    (*index)++;
}

// Wrapper functions for each instruction
void instr_nop(uint32_t *result, uint32_t rs1, uint32_t rs2, uint32_t rs3) {
    CUS_NOP();
    *result = 0;
}

void instr_add(uint32_t *result, uint32_t rs1, uint32_t rs2, uint32_t rs3) {
    CUS_ADD(*result, rs1, rs2);
}

void instr_double_rs1(uint32_t *result, uint32_t rs1, uint32_t rs2, uint32_t rs3) {
    CUS_DOUBLE_RS1(*result, rs1, rs2);
}

void instr_double_rs2(uint32_t *result, uint32_t rs1, uint32_t rs2, uint32_t rs3) {
    CUS_DOUBLE_RS2(*result, rs1, rs2);
}

void instr_add_multi(uint32_t *result, uint32_t rs1, uint32_t rs2, uint32_t rs3) {
    CUS_ADD_MULTI(*result, rs1, rs2);
}

void instr_add_rs3_madd(uint32_t *result, uint32_t rs1, uint32_t rs2, uint32_t rs3) {
    CUS_ADD_RS3_MADD(*result, rs1, rs2, rs3);
}

void instr_add_rs3_msub(uint32_t *result, uint32_t rs1, uint32_t rs2, uint32_t rs3) {
    CUS_ADD_RS3_MSUB(*result, rs1, rs2, rs3);
}

void instr_add_rs3_nmadd(uint32_t *result, uint32_t rs1, uint32_t rs2, uint32_t rs3) {
    CUS_ADD_RS3_NMADD(*result, rs1, rs2, rs3);
}

void instr_add_rs3_nmsub(uint32_t *result, uint32_t rs1, uint32_t rs2, uint32_t rs3) {
    CUS_ADD_RS3_NMSUB(*result, rs1, rs2, rs3);
}

// Baseline: regular ADD instruction for comparison
void instr_add_baseline(uint32_t *result, uint32_t rs1, uint32_t rs2, uint32_t rs3) {
    *result = rs1 + rs2;
}

int main() {
    struct cycle_result results[20];
    int result_count = 0;

    printf("\n");
    printf("==============================================\n");
    printf("CVXIF Coprocessor Cycle Count Test\n");
    printf("==============================================\n");
    printf("Iterations per instruction: %d\n\n", ITERATIONS);

    // Baseline measurement
    measure_cycles(instr_add_baseline, "BASELINE_ADD", results, &result_count);

    // CVXIF instructions
    measure_cycles(instr_nop, "CUS_NOP", results, &result_count);
    measure_cycles(instr_add, "CUS_ADD", results, &result_count);
    measure_cycles(instr_double_rs1, "CUS_DOUBLE_RS1", results, &result_count);
    measure_cycles(instr_double_rs2, "CUS_DOUBLE_RS2", results, &result_count);
    measure_cycles(instr_add_multi, "CUS_ADD_MULTI", results, &result_count);
    measure_cycles(instr_add_rs3_madd, "CUS_ADD_RS3_MADD", results, &result_count);
    measure_cycles(instr_add_rs3_msub, "CUS_ADD_RS3_MSUB", results, &result_count);
    measure_cycles(instr_add_rs3_nmadd, "CUS_ADD_RS3_NMADD", results, &result_count);
    measure_cycles(instr_add_rs3_nmsub, "CUS_ADD_RS3_NMSUB", results, &result_count);

    // Print results
    printf("\n");
    printf("%-25s %12s %12s\n", "Instruction", "Total Cycles", "Cycles/Iter");
    printf("---------------------------------------------- ----------------\n");

    for (int i = 0; i < result_count; i++) {
        printf("%-25s %12lu %12lu\n",
               results[i].name,
               results[i].total_cycles,
               results[i].cycles_per_iteration);
    }

    printf("\n");
    printf("Test Complete!\n");
    printf("==============================================\n\n");

    return 0;
}
