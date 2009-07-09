
#ifndef _ORC_TEST_TEST_H_
#define _ORC_TEST_TEST_H_

#include <orc/orc.h>
#include <orc/orcutils.h>

ORC_BEGIN_DECLS

typedef enum {
  ORC_TEST_FAILED = 0,
  ORC_TEST_INDETERMINATE = 1,
  ORC_TEST_OK = 2
} OrcTestResult;

void orc_test_init (void);
OrcTestResult orc_test_gcc_compile (OrcProgram *p);
OrcTestResult orc_test_gcc_compile_neon (OrcProgram *p);
OrcTestResult orc_test_gcc_compile_c64x (OrcProgram *p);
void orc_test_random_bits (void *data, int n_bytes);
OrcTestResult orc_test_compare_output (OrcProgram *program);
OrcTestResult orc_test_compare_output_backup (OrcProgram *program);

OrcProgram *orc_test_get_program_for_opcode (OrcStaticOpcode *opcode);
OrcProgram *orc_test_get_program_for_opcode_const (OrcStaticOpcode *opcode);
OrcProgram *orc_test_get_program_for_opcode_param (OrcStaticOpcode *opcode);

ORC_END_DECLS

#endif

