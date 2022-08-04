#include <stdio.h>
#include <string.h>
#include "headers/cpu.h"
#include "headers/memory.h"
#include "headers/common.h"

#define MAX_NUM_INSTRUCTION_CYCLE 100

// symbols from isa and sram
void print_register(core_t *cr);
void print_stack(core_t *cr);

void TestParsingOperand();

int main()
{
  TestParsingOperand();
  return 0;
}