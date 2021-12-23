#include <stdint.h>
#include "jvm_instructions.h"

void jvm_process() {
    for (int i = 0; i < 256; i++) {
        jvm_process_instruction(i);
    }
}