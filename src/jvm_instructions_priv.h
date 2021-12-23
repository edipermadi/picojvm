//
// Created by edi on 23/12/21.
//

#ifndef __PICOJVM_JVM_INSTRUCTIONS_PRIV_H__
#define __PICOJVM_JVM_INSTRUCTIONS_PRIV_H__

static void op_aaload();

static void op_aastore();

static void op_aconst_null();

static void op_aload();

static void op_aload_0();

static void op_aload_1();

static void op_aload_2();

static void op_aload_3();

static void op_anewarray();

static void op_areturn();

static void op_arraylength();

static void op_astore();

static void op_astore_0();

static void op_astore_1();

static void op_astore_2();

static void op_astore_3();

static void op_athrow();

static void op_baload();

static void op_bastore();

static void op_bipush();

static void op_caload();

static void op_castore();

static void op_checkcast();

static void op_d2f();

static void op_d2i();

static void op_d2l();

static void op_dadd();

static void op_daload();

static void op_dastore();

static void op_dcmpg();

static void op_dcmpl();

static void op_dconst_0();

static void op_dconst_1();

static void op_ddiv();

static void op_dload();

static void op_dload_0();

static void op_dload_1();

static void op_dload_2();

static void op_dload_3();

static void op_dmul();

static void op_dneg();

static void op_drem();

static void op_dreturn();

static void op_dstore();

static void op_dstore_0();

static void op_dstore_1();

static void op_dstore_2();

static void op_dstore_3();

static void op_dsub();

static void op_dup();

static void op_dup_x1();

static void op_dup_x2();

static void op_dup2();

static void op_dup2_x1();

static void op_dup2_x2();

static void op_f2d();

static void op_f2i();

static void op_f2l();

static void op_fadd();

static void op_faload();

static void op_fastore();

static void op_fcmpg();

static void op_fcmpl();

static void op_fconst_0();

static void op_fconst_1();

static void op_fconst_2();

static void op_fdiv();

static void op_fload();

static void op_fload_0();

static void op_fload_1();

static void op_fload_2();

static void op_fload_3();

static void op_fmul();

static void op_fneg();

static void op_frem();

static void op_freturn();

static void op_fstore();

static void op_fstore_0();

static void op_fstore_1();

static void op_fstore_2();

static void op_fstore_3();

static void op_fsub();

static void op_getfield();

static void op_getstatic();

static void op_goto();

static void op_goto_w();

static void op_i2b();

static void op_i2c();

static void op_i2d();

static void op_i2f();

static void op_i2l();

static void op_i2s();

static void op_iadd();

static void op_iaload();

static void op_iand();

static void op_iastore();

static void op_iconst_m1();

static void op_iconst_0();

static void op_iconst_1();

static void op_iconst_2();

static void op_iconst_3();

static void op_iconst_4();

static void op_iconst_5();

static void op_idiv();

static void op_if_acmpeq();

static void op_if_acmpne();

static void op_if_icmpeq();

static void op_if_icmpne();

static void op_if_icmplt();

static void op_if_icmpge();

static void op_if_icmpgt();

static void op_if_icmple();

static void op_ifeq();

static void op_ifne();

static void op_iflt();

static void op_ifge();

static void op_ifgt();

static void op_ifle();

static void op_ifnonnull();

static void op_ifnull();

static void op_iinc();

static void op_iload();

static void op_iload_0();

static void op_iload_1();

static void op_iload_2();

static void op_iload_3();

static void op_imul();

static void op_ineg();

static void op_instanceof();

static void op_invokedynamic();

static void op_invokeinterface();

static void op_invokespecial();

static void op_invokestatic();

static void op_invokevirtual();

static void op_ior();

static void op_irem();

static void op_ireturn();

static void op_ishl();

static void op_ishr();

static void op_istore();

static void op_istore_0();

static void op_istore_1();

static void op_istore_2();

static void op_istore_3();

static void op_isub();

static void op_iushr();

static void op_ixor();

static void op_jsr();

static void op_jsr_w();

static void op_l2d();

static void op_l2f();

static void op_l2i();

static void op_ladd();

static void op_laload();

static void op_land();

static void op_lastore();

static void op_lcmp();

static void op_lconst_0();

static void op_lconst_1();

static void op_ldc();

static void op_ldc_w();

static void op_ldc2_w();

static void op_ldiv();

static void op_lload();

static void op_lload_0();

static void op_lload_1();

static void op_lload_2();

static void op_lload_3();

static void op_lmul();

static void op_lneg();

static void op_lookupswitch();

static void op_lor();

static void op_lrem();

static void op_lreturn();

static void op_lshl();

static void op_lshr();

static void op_lstore();

static void op_lstore_0();

static void op_lstore_1();

static void op_lstore_2();

static void op_lstore_3();

static void op_lsub();

static void op_lushr();

static void op_lxor();

static void op_monitorenter();

static void op_monitorexit();

static void op_multianewarray();

static void op_new();

static void op_newarray();

static void op_nop();

static void op_pop();

static void op_pop2();

static void op_putfield();

static void op_putstatic();

static void op_ret();

static void op_return();

static void op_saload();

static void op_sastore();

static void op_sipush();

static void op_swap();

static void op_tableswitch();

static void op_wide();

#endif //PICOJVM_JVM_INSTRUCTIONS_PRIV_H
