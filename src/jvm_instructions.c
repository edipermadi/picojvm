#include <stdint.h>
#include "jvm_instructions.h"
#include "jvm_opcodes.h"
#include "jvm_instructions_priv.h"

void jvm_process_instruction(uint32_t code) {
    switch (code) {
        case OPCODE_AALOAD:
            op_aaload();
            break;
        case OPCODE_AASTORE:
            op_aastore();
            break;
        case OPCODE_ACONST_NULL:
            op_aconst_null();
            break;
        case OPCODE_ALOAD:
            op_aload();
            break;
        case OPCODE_ALOAD0:
            op_aload_0();
            break;
        case OPCODE_ALOAD1:
            op_aload_1();
            break;
        case OPCODE_ALOAD2:
            op_aload_2();
            break;
        case OPCODE_ALOAD3:
            op_aload_3();
            break;
        case OPCODE_ANEWARRAY:
            op_anewarray();
            break;
        case OPCODE_ARETURN:
            op_areturn();
            break;
        case OPCODE_ARRAYLENGTH:
            op_arraylength();
            break;
        case OPCODE_ASTORE:
            op_astore();
            break;
        case OPCODE_ASTORE_0:
            op_astore_0();
            break;
        case OPCODE_ASTORE_1:
            op_astore_1();
            break;
        case OPCODE_ASTORE_2:
            op_astore_2();
            break;
        case OPCODE_ASTORE_3:
            op_astore_3();
            break;
        case OPCODE_ATHROW:
            op_athrow();
            break;
        case OPCODE_BALOAD:
            op_baload();
            break;
        case OPCODE_BASTORE:
            op_bastore();
            break;
        case OPCODE_BIPUSH:
            op_bipush();
            break;
        case OPCODE_CALOAD:
            op_caload();
            break;
        case OPCODE_CASTORE:
            op_castore();
            break;
        case OPCODE_CHECKCAST:
            op_checkcast();
            break;
        case OPCODE_D2F:
            op_d2f();
            break;
        case OPCODE_D2I:
            op_d2i();
            break;
        case OPCODE_D2L:
            op_d2l();
            break;
        case OPCODE_DADD:
            op_dadd();
            break;
        case OPCODE_DALOAD:
            op_daload();
            break;
        case OPCODE_DASTORE:
            op_dastore();
            break;
        case OPCODE_DCMPG:
            op_dcmpg();
            break;
        case OPCODE_DCMPL:
            op_dcmpl();
            break;
        case OPCODE_DCONST_0:
            op_dconst_0();
            break;
        case OPCODE_DCONST_1:
            op_dconst_1();
            break;
        case OPCODE_DDIV:
            op_ddiv();
            break;
        case OPCODE_DLOAD:
            op_dload();
            break;
        case OPCODE_DLOAD_0:
            op_dload_0();
            break;
        case OPCODE_DLOAD_1:
            op_dload_1();
            break;
        case OPCODE_DLOAD_2:
            op_dload_2();
            break;
        case OPCODE_DLOAD_3:
            op_dload_3();
            break;
        case OPCODE_DMUL:
            op_dmul();
            break;
        case OPCODE_DNEG:
            op_dneg();
            break;
        case OPCODE_DREM:
            op_drem();
            break;
        case OPCODE_DRETURN:
            op_dreturn();
            break;
        case OPCODE_DSTORE:
            op_dstore();
            break;
        case OPCODE_DSTORE_0:
            op_dstore_0();
            break;
        case OPCODE_DSTORE_1:
            op_dstore_1();
            break;
        case OPCODE_DSTORE_2:
            op_dstore_2();
            break;
        case OPCODE_DSTORE_3:
            op_dstore_3();
            break;
        case OPCODE_DSUB:
            op_dsub();
            break;
        case OPCODE_DUP:
            op_dup();
            break;
        case OPCODE_DUP_X1:
            op_dup_x1();
            break;
        case OPCODE_DUP_X2:
            op_dup_x2();
            break;
        case OPCODE_DUP2:
            op_dup2();
            break;
        case OPCODE_DUP2_X1:
            op_dup2_x1();
            break;
        case OPCODE_DUP2_X2:
            op_dup2_x2();
            break;
        case OPCODE_F2D:
            op_f2d();
            break;
        case OPCODE_F2I:
            op_f2i();
            break;
        case OPCODE_F2L:
            op_f2l();
            break;
        case OPCODE_FADD:
            op_fadd();
            break;
        case OPCODE_FALOAD:
            op_faload();
            break;
        case OPCODE_FASTORE:
            op_fastore();
            break;
        case OPCODE_FCMPG:
            op_fcmpg();
            break;
        case OPCODE_FCMPL:
            op_fcmpl();
            break;
        case OPCODE_FCONST_0:
            op_fconst_0();
            break;
        case OPCODE_FCONST_1:
            op_fconst_1();
            break;
        case OPCODE_FCONST_2:
            op_fconst_2();
            break;
        case OPCODE_FDIV:
            op_fdiv();
            break;
        case OPCODE_FLOAD:
            op_fload();
            break;
        case OPCODE_FLOAD_0:
            op_fload_0();
            break;
        case OPCODE_FLOAD_1:
            op_fload_1();
            break;
        case OPCODE_FLOAD_2:
            op_fload_2();
            break;
        case OPCODE_FLOAD_3:
            op_fload_3();
            break;
        case OPCODE_FMUL:
            op_fmul();
            break;
        case OPCODE_FNEG:
            op_fneg();
            break;
        case OPCODE_FREM:
            op_frem();
            break;
        case OPCODE_FRETURN:
            op_freturn();
            break;
        case OPCODE_FSTORE:
            op_fstore();
            break;
        case OPCODE_FSTORE_0:
            op_fstore_0();
            break;
        case OPCODE_FSTORE_1:
            op_fstore_1();
            break;
        case OPCODE_FSTORE_2:
            op_fstore_2();
            break;
        case OPCODE_FSTORE_3:
            op_fstore_3();
            break;
        case OPCODE_FSUB:
            op_fsub();
            break;
        case OPCODE_GETFIELD:
            op_getfield();
            break;
        case OPCODE_GETSTATIC:
            op_getstatic();
            break;
        case OPCODE_GOTO:
            op_goto();
            break;
        case OPCODE_GOTO_W:
            op_goto_w();
            break;
        case OPCODE_I2B:
            op_i2b();
            break;
        case OPCODE_I2C:
            op_i2c();
            break;
        case OPCODE_I2D:
            op_i2d();
            break;
        case OPCODE_I2F:
            op_i2f();
            break;
        case OPCODE_I2L:
            op_i2l();
            break;
        case OPCODE_I2S:
            op_i2s();
            break;
        case OPCODE_IADD:
            op_iadd();
            break;
        case OPCODE_IALOAD:
            op_iaload();
            break;
        case OPCODE_IAND:
            op_iand();
            break;
        case OPCODE_IASTORE:
            op_iastore();
            break;
        case OPCODE_ICONST_M1:
            op_iconst_m1();
            break;
        case OPCODE_ICONST_0:
            op_iconst_0();
            break;
        case OPCODE_ICONST_1:
            op_iconst_1();
            break;
        case OPCODE_ICONST_2:
            op_iconst_2();
            break;
        case OPCODE_ICONST_3:
            op_iconst_3();
            break;
        case OPCODE_ICONST_4:
            op_iconst_4();
            break;
        case OPCODE_ICONST_5:
            op_iconst_5();
            break;
        case OPCODE_IDIV:
            op_idiv();
            break;
        case OPCODE_IF_ACMPEQ:
            op_if_acmpeq();
            break;
        case OPCODE_IF_ACMPNE:
            op_if_acmpne();
            break;
        case OPCODE_IF_ICMPLT:
            op_if_icmplt();
            break;
        case OPCODE_IF_ICMPGE:
            op_if_icmpge();
            break;
        case OPCODE_IF_ICMPGT:
            op_if_icmpgt();
            break;
        case OPCODE_IF_ICMPLE:
            op_if_icmple();
            break;
        case OPCODE_IFEQ:
            op_if_icmpeq();
            break;
        case OPCODE_IFNE:
            op_if_icmpne();
            break;
        case OPCODE_IFLT:
            op_iflt();
            break;
        case OPCODE_IFGE:
            op_ifge();
            break;
        case OPCODE_IFGT:
            op_ifgt();
            break;
        case OPCODE_IFLE:
            op_ifle();
            break;
        case OPCODE_IFNONNULL:
            op_ifnonnull();
            break;
        case OPCODE_IFNULL:
            op_ifnull();
            break;
        case OPCODE_IINC:
            op_iinc();
            break;
        case OPCODE_ILOAD:
            op_iload();
            break;
        case OPCODE_ILOAD_0:
            op_iload_0();
            break;
        case OPCODE_ILOAD_1:
            op_iload_1();
            break;
        case OPCODE_ILOAD_2:
            op_iload_2();
            break;
        case OPCODE_ILOAD_3:
            op_iload_3();
            break;
        case OPCODE_IMUL:
            op_imul();
            break;
        case OPCODE_INEG:
            op_ineg();
            break;
        case OPCODE_INSTANCEOF:
            op_instanceof();
            break;
        case OPCODE_INVOKEDYNAMIC:
            op_invokedynamic();
            break;
        case OPCODE_INVOKEINTERFACE:
            op_invokeinterface();
            break;
        case OPCODE_INVOKESPECIAL:
            op_invokespecial();
            break;
        case OPCODE_INVOKESTATIC:
            op_invokestatic();
            break;
        case OPCODE_INVOKEVIRTUAL:
            op_invokevirtual();
            break;
        case OPCODE_IOR:
            op_ior();
            break;
        case OPCODE_IREM:
            op_irem();
            break;
        case OPCODE_IRETURN:
            op_ireturn();
            break;
        case OPCODE_ISHL:
            op_ishl();
            break;
        case OPCODE_ISHR:
            op_ishr();
            break;
        case OPCODE_ISTORE:
            op_istore();
            break;
        case OPCODE_ISTORE_0:
            op_istore_0();
            break;
        case OPCODE_ISTORE_1:
            op_istore_1();
            break;
        case OPCODE_ISTORE_2:
            op_istore_2();
            break;
        case OPCODE_ISTORE_3:
            op_istore_3();
            break;
        case OPCODE_ISUB:
            op_isub();
            break;
        case OPCODE_IUSHR:
            op_iushr();
            break;
        case OPCODE_IXOR:
            op_ixor();
            break;
        case OPCODE_JSR:
            op_jsr();
            break;
        case OPCODE_JSR_W:
            op_jsr_w();
            break;
        case OPCODE_L2D:
            op_l2d();
            break;
        case OPCODE_L2F:
            op_l2f();
            break;
        case OPCODE_L2I:
            op_l2i();
            break;
        case OPCODE_LADD:
            op_ladd();
            break;
        case OPCODE_LALOAD:
            op_laload();
            break;
        case OPCODE_LAND:
            op_land();
            break;
        case OPCODE_LASTORE:
            op_lastore();
            break;
        case OPCODE_LCMP:
            op_lcmp();
            break;
        case OPCODE_LCONST_0:
            op_lconst_0();
            break;
        case OPCODE_LCONST_1:
            op_lconst_1();
            break;
        case OPCODE_LDC:
            op_ldc();
            break;
        case OPCODE_LDC_W:
            op_ldc_w();
            break;
        case OPCODE_LDC2_W:
            op_ldc2_w();
            break;
        case OPCODE_LDIV:
            op_ldiv();
            break;
        case OPCODE_LLOAD:
            op_lload();
            break;
        case OPCODE_LLOAD_0:
            op_lload_0();
            break;
        case OPCODE_LLOAD_1:
            op_lload_1();
            break;
        case OPCODE_LLOAD_2:
            op_lload_2();
            break;
        case OPCODE_LLOAD_3:
            op_lload_3();
            break;
        case OPCODE_LMUL:
            op_lmul();
            break;
        case OPCODE_LNEG:
            op_lneg();
            break;
        case OPCODE_LOOKUPSWITCH:
            op_lookupswitch();
            break;
        case OPCODE_LOR:
            op_lor();
            break;
        case OPCODE_LREM:
            op_lrem();
            break;
        case OPCODE_LRETURN:
            op_lreturn();
            break;
        case OPCODE_LSHL:
            op_lshl();
            break;
        case OPCODE_LSHR:
            op_lshr();
            break;
        case OPCODE_LSTORE:
            op_lstore();
            break;
        case OPCODE_LSTORE_0:
            op_lstore_0();
            break;
        case OPCODE_LSTORE_1:
            op_lstore_1();
            break;
        case OPCODE_LSTORE_2:
            op_lstore_2();
            break;
        case OPCODE_LSTORE_3:
            op_lstore_3();
            break;
        case OPCODE_LSUB:
            op_lsub();
            break;
        case OPCODE_LUSHR:
            op_lushr();
            break;
        case OPCODE_LXOR:
            op_lxor();
            break;
        case OPCODE_MONITORENTER:
            op_monitorenter();
            break;
        case OPCODE_MONITOREXIT:
            op_monitorexit();
            break;
        case OPCODE_MULTIANEWARRAY:
            op_multianewarray();
            break;
        case OPCODE_NEW:
            op_new();
            break;
        case OPCODE_NEWARRAY:
            op_newarray();
            break;
        case OPCODE_NOP:
            op_nop();
            break;
        case OPCODE_POP:
            op_pop();
            break;
        case OPCODE_POP2:
            op_pop2();
            break;
        case OPCODE_PUTFIELD:
            op_putfield();
            break;
        case OPCODE_PUTSTATIC:
            op_putstatic();
            break;
        case OPCODE_RET:
            op_ret();
            break;
        case OPCODE_RETURN:
            op_return();
            break;
        case OPCODE_SALOAD:
            op_saload();
            break;
        case OPCODE_SASTORE:
            op_sastore();
            break;
        case OPCODE_SIPUSH:
            op_sipush();
            break;
        case OPCODE_SWAP:
            op_swap();
            break;
        case OPCODE_TABLESWITCH:
            op_tableswitch();
            break;
        case OPCODE_WIDE:
            op_wide();
            break;
        default:
            op_nop();
            break;
    }
}

static void op_aaload() {
// FIXME add implementation
}

static void op_aastore() {
// FIXME add implementation
}

static void op_aconst_null() {
// FIXME add implementation
}

static void op_aload() {
// FIXME add implementation
}

static void op_aload_0() {
// FIXME add implementation
}

static void op_aload_1() {
// FIXME add implementation
}

static void op_aload_2() {
// FIXME add implementation
}

static void op_aload_3() {
// FIXME add implementation
}

static void op_anewarray() {
// FIXME add implementation
}

static void op_areturn() {
// FIXME add implementation
}

static void op_arraylength() {
// FIXME add implementation
}

static void op_astore() {
// FIXME add implementation
}

static void op_astore_0() {
// FIXME add implementation
}

static void op_astore_1() {
// FIXME add implementation
}

static void op_astore_2() {
// FIXME add implementation
}

static void op_astore_3() {
// FIXME add implementation
}

static void op_athrow() {
// FIXME add implementation
}

static void op_baload() {
// FIXME add implementation
}

static void op_bastore() {
// FIXME add implementation
}

static void op_bipush() {
// FIXME add implementation
}

static void op_caload() {
// FIXME add implementation
}

static void op_castore() {
// FIXME add implementation
}

static void op_checkcast() {
// FIXME add implementation
}

static void op_d2f() {
// FIXME add implementation
}

static void op_d2i() {
// FIXME add implementation
}

static void op_d2l() {
// FIXME add implementation
}

static void op_dadd() {
// FIXME add implementation
}

static void op_daload() {
// FIXME add implementation
}

static void op_dastore() {
// FIXME add implementation
}

static void op_dcmpg() {
// FIXME add implementation
}

static void op_dcmpl() {
// FIXME add implementation
}

static void op_dconst_0() {
// FIXME add implementation
}

static void op_dconst_1() {
// FIXME add implementation
}

static void op_ddiv() {
// FIXME add implementation
}

static void op_dload() {
// FIXME add implementation
}

static void op_dload_0() {
// FIXME add implementation
}

static void op_dload_1() {
// FIXME add implementation
}

static void op_dload_2() {
// FIXME add implementation
}

static void op_dload_3() {
// FIXME add implementation
}

static void op_dmul() {
// FIXME add implementation
}

static void op_dneg() {
// FIXME add implementation
}

static void op_drem() {
// FIXME add implementation
}

static void op_dreturn() {
// FIXME add implementation
}

static void op_dstore() {
// FIXME add implementation
}

static void op_dstore_0() {
// FIXME add implementation
}

static void op_dstore_1() {
// FIXME add implementation
}

static void op_dstore_2() {
// FIXME add implementation
}

static void op_dstore_3() {
// FIXME add implementation
}

static void op_dsub() {
// FIXME add implementation
}

static void op_dup() {
// FIXME add implementation
}

static void op_dup_x1() {
// FIXME add implementation
}

static void op_dup_x2() {
// FIXME add implementation
}

static void op_dup2() {
// FIXME add implementation
}

static void op_dup2_x1() {
// FIXME add implementation
}

static void op_dup2_x2() {
// FIXME add implementation
}

static void op_f2d() {
// FIXME add implementation
}

static void op_f2i() {
// FIXME add implementation
}

static void op_f2l() {
// FIXME add implementation
}

static void op_fadd() {
// FIXME add implementation
}

static void op_faload() {
// FIXME add implementation
}

static void op_fastore() {
// FIXME add implementation
}

static void op_fcmpg() {
// FIXME add implementation
}

static void op_fcmpl() {
// FIXME add implementation
}

static void op_fconst_0() {
// FIXME add implementation
}

static void op_fconst_1() {
// FIXME add implementation
}

static void op_fconst_2() {
// FIXME add implementation
}

static void op_fdiv() {
// FIXME add implementation
}

static void op_fload() {
// FIXME add implementation
}

static void op_fload_0() {
// FIXME add implementation
}

static void op_fload_1() {
// FIXME add implementation
}

static void op_fload_2() {
// FIXME add implementation
}

static void op_fload_3() {
// FIXME add implementation
}

static void op_fmul() {
// FIXME add implementation
}

static void op_fneg() {
// FIXME add implementation
}

static void op_frem() {
// FIXME add implementation
}

static void op_freturn() {
// FIXME add implementation
}

static void op_fstore() {
// FIXME add implementation
}

static void op_fstore_0() {
// FIXME add implementation
}

static void op_fstore_1() {
// FIXME add implementation
}

static void op_fstore_2() {
// FIXME add implementation
}

static void op_fstore_3() {
// FIXME add implementation
}

static void op_fsub() {
// FIXME add implementation
}

static void op_getfield() {
// FIXME add implementation
}

static void op_getstatic() {
// FIXME add implementation
}

static void op_goto() {
// FIXME add implementation
}

static void op_goto_w() {
// FIXME add implementation
}

static void op_i2b() {
// FIXME add implementation
}

static void op_i2c() {
// FIXME add implementation
}

static void op_i2d() {
// FIXME add implementation
}

static void op_i2f() {
// FIXME add implementation
}

static void op_i2l() {
// FIXME add implementation
}

static void op_i2s() {
// FIXME add implementation
}

static void op_iadd() {
// FIXME add implementation
}

static void op_iaload() {
// FIXME add implementation
}

static void op_iand() {
// FIXME add implementation
}

static void op_iastore() {
// FIXME add implementation
}

static void op_iconst_m1() {
// FIXME add implementation
}

static void op_iconst_0() {
// FIXME add implementation
}

static void op_iconst_1() {
// FIXME add implementation
}

static void op_iconst_2() {
// FIXME add implementation
}

static void op_iconst_3() {
// FIXME add implementation
}

static void op_iconst_4() {
// FIXME add implementation
}

static void op_iconst_5() {
// FIXME add implementation
}

static void op_idiv() {
// FIXME add implementation
}

static void op_if_acmpeq() {
// FIXME add implementation
}

static void op_if_acmpne() {
// FIXME add implementation
}

static void op_if_icmpeq() {
// FIXME add implementation
}

static void op_if_icmpne() {
// FIXME add implementation
}

static void op_if_icmplt() {
// FIXME add implementation
}

static void op_if_icmpge() {
// FIXME add implementation
}

static void op_if_icmpgt() {
// FIXME add implementation
}

static void op_if_icmple() {
// FIXME add implementation
}

static void op_ifeq() {
// FIXME add implementation
}

static void op_ifne() {
// FIXME add implementation
}

static void op_iflt() {
// FIXME add implementation
}

static void op_ifge() {
// FIXME add implementation
}

static void op_ifgt() {
// FIXME add implementation
}

static void op_ifle() {
// FIXME add implementation
}

static void op_ifnonnull() {
// FIXME add implementation
}

static void op_ifnull() {
// FIXME add implementation
}

static void op_iinc() {
// FIXME add implementation
}

static void op_iload() {
// FIXME add implementation
}

static void op_iload_0() {
// FIXME add implementation
}

static void op_iload_1() {
// FIXME add implementation
}

static void op_iload_2() {
// FIXME add implementation
}

static void op_iload_3() {
// FIXME add implementation
}

static void op_imul() {
// FIXME add implementation
}

static void op_ineg() {
// FIXME add implementation
}

static void op_instanceof() {
// FIXME add implementation
}

static void op_invokedynamic() {
// FIXME add implementation
}

static void op_invokeinterface() {
// FIXME add implementation
}

static void op_invokespecial() {
// FIXME add implementation
}

static void op_invokestatic() {
// FIXME add implementation
}

static void op_invokevirtual() {
// FIXME add implementation
}

static void op_ior() {
// FIXME add implementation
}

static void op_irem() {
// FIXME add implementation
}

static void op_ireturn() {
// FIXME add implementation
}

static void op_ishl() {
// FIXME add implementation
}

static void op_ishr() {
// FIXME add implementation
}

static void op_istore() {
// FIXME add implementation
}

static void op_istore_0() {
// FIXME add implementation
}

static void op_istore_1() {
// FIXME add implementation
}

static void op_istore_2() {
// FIXME add implementation
}

static void op_istore_3() {
// FIXME add implementation
}

static void op_isub() {
// FIXME add implementation
}

static void op_iushr() {
// FIXME add implementation
}

static void op_ixor() {
// FIXME add implementation
}

static void op_jsr() {
// FIXME add implementation
}

static void op_jsr_w() {
// FIXME add implementation
}

static void op_l2d() {
// FIXME add implementation
}

static void op_l2f() {
// FIXME add implementation
}

static void op_l2i() {
// FIXME add implementation
}

static void op_ladd() {
// FIXME add implementation
}

static void op_laload() {
// FIXME add implementation
}

static void op_land() {
// FIXME add implementation
}

static void op_lastore() {
// FIXME add implementation
}

static void op_lcmp() {
// FIXME add implementation
}

static void op_lconst_0() {
// FIXME add implementation
}

static void op_lconst_1() {
// FIXME add implementation
}

static void op_ldc() {
// FIXME add implementation
}

static void op_ldc_w() {
// FIXME add implementation
}

static void op_ldc2_w() {
// FIXME add implementation
}

static void op_ldiv() {
// FIXME add implementation
}

static void op_lload() {
// FIXME add implementation
}

static void op_lload_0() {
// FIXME add implementation
}

static void op_lload_1() {
// FIXME add implementation
}

static void op_lload_2() {
// FIXME add implementation
}

static void op_lload_3() {
// FIXME add implementation
}

static void op_lmul() {
// FIXME add implementation
}

static void op_lneg() {
// FIXME add implementation
}

static void op_lookupswitch() {
// FIXME add implementation
}

static void op_lor() {
// FIXME add implementation
}

static void op_lrem() {
// FIXME add implementation
}

static void op_lreturn() {
// FIXME add implementation
}

static void op_lshl() {
// FIXME add implementation
}

static void op_lshr() {
// FIXME add implementation
}

static void op_lstore() {
// FIXME add implementation
}

static void op_lstore_0() {
// FIXME add implementation
}

static void op_lstore_1() {
// FIXME add implementation
}

static void op_lstore_2() {
// FIXME add implementation
}

static void op_lstore_3() {
// FIXME add implementation
}

static void op_lsub() {
// FIXME add implementation
}

static void op_lushr() {
// FIXME add implementation
}

static void op_lxor() {
// FIXME add implementation
}

static void op_monitorenter() {
// FIXME add implementation
}

static void op_monitorexit() {
// FIXME add implementation
}

static void op_multianewarray() {
// FIXME add implementation
}

static void op_new() {
// FIXME add implementation
}

static void op_newarray() {
// FIXME add implementation
}

static void op_nop() {
// FIXME add implementation
}

static void op_pop() {
// FIXME add implementation
}

static void op_pop2() {
// FIXME add implementation
}

static void op_putfield() {
// FIXME add implementation
}

static void op_putstatic() {
// FIXME add implementation
}

static void op_ret() {
// FIXME add implementation
}

static void op_return() {
// FIXME add implementation
}

static void op_saload() {
// FIXME add implementation
}

static void op_sastore() {
// FIXME add implementation
}

static void op_sipush() {
// FIXME add implementation
}

static void op_swap() {
// FIXME add implementation
}

static void op_tableswitch() {
// FIXME add implementation
}

static void op_wide() {
// FIXME add implementation
}