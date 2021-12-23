#include <stdint.h>

// JVM instructions
#define OPCODE_AALOAD          0x32 // Load reference from array
#define OPCODE_AASTORE         0x53 // Store into reference array
#define OPCODE_ACONST_NULL     0x01 // Push null
#define OPCODE_ALOAD           0x19 // Load reference from local variable
#define OPCODE_ALOAD0          0x2a // Load reference from local variable
#define OPCODE_ALOAD1          0x2b // Load reference from local variable
#define OPCODE_ALOAD2          0x2c // Load reference from local variable
#define OPCODE_ALOAD3          0x2d // Load reference from local variable
#define OPCODE_ANEWARRAY       0xbd // Create new array of reference
#define OPCODE_ARETURN         0xb0 // Return reference from method
#define OPCODE_ARRAYLENGTH     0xbe // Get length of array
#define OPCODE_ASTORE          0x3a // Store reference into local variable
#define OPCODE_ASTORE_0        0x4b // Store reference into local variable
#define OPCODE_ASTORE_1        0x4c // Store reference into local variable
#define OPCODE_ASTORE_2        0x4d // Store reference into local variable
#define OPCODE_ASTORE_3        0x4e // Store reference into local variable
#define OPCODE_ATHROW          0xbf // Throw exception or error
#define OPCODE_BALOAD          0x33 // Load byte or boolean from array
#define OPCODE_BASTORE         0x54 // Store into byte or boolean array
#define OPCODE_BIPUSH          0x10 // Push byte
#define OPCODE_CALOAD          0x34 // Load char from array
#define OPCODE_CASTORE         0x55
#define OPCODE_CHECKCAST       0xc0
#define OPCODE_D2F             0x90
#define OPCODE_D2I             0x8e
#define OPCODE_D2L             0x8f
#define OPCODE_DADD            0x63
#define OPCODE_DALOAD          0x31
#define OPCODE_DASTORE         0x52
#define OPCODE_DCMPG           0x98
#define OPCODE_DCMPL           0x97
#define OPCODE_DCONST_0        0x0e
#define OPCODE_DCONST_1        0x0f
#define OPCODE_DDIV            0x6f
#define OPCODE_DLOAD           0x18
#define OPCODE_DLOAD_0         0x26
#define OPCODE_DLOAD_1         0x27
#define OPCODE_DLOAD_2         0x28
#define OPCODE_DLOAD_3         0x29
#define OPCODE_DMUL            0x6b
#define OPCODE_DNEG            0x77
#define OPCODE_DREM            0x73
#define OPCODE_DRETURN         0xaf
#define OPCODE_DSTORE          0x39
#define OPCODE_DSTORE_0        0x47
#define OPCODE_DSTORE_1        0x48
#define OPCODE_DSTORE_2        0x49
#define OPCODE_DSTORE_3        0x4a 
#define OPCODE_DSUB            0x67
#define OPCODE_DUP             0x59
#define OPCODE_DUP_X1          0x5a
#define OPCODE_DUP_X2          0x5b
#define OPCODE_DUP2            0x5c
#define OPCODE_DUP2_X1         0x5d
#define OPCODE_DUP2_X2         0x5e
#define OPCODE_F2D             0x5e
#define OPCODE_F2I             0x8b
#define OPCODE_F2L             0x8c
#define OPCODE_FADD            0x62
#define OPCODE_FALOAD          0x30
#define OPCODE_FASTORE         0x51
#define OPCODE_FCMPG           0x96
#define OPCODE_FCMPL           0x95
#define OPCODE_FCONST_0        0x0b
#define OPCODE_FCONST_1        0x0c
#define OPCODE_FCONST_2        0x0d
#define OPCODE_FDIV            0x6e
#define OPCODE_FLOAD           0x17
#define OPCODE_FLOAD_0         0x22
#define OPCODE_FLOAD_1         0x23
#define OPCODE_FLOAD_2         0x24
#define OPCODE_FLOAD_3         0x25
#define OPCODE_FMUL            0x6a
#define OPCODE_FNEG            0x76
#define OPCODE_FREM            0x72
#define OPCODE_FRETURN         0xae
#define OPCODE_FSTORE          0x38
#define OPCODE_FSTORE_0        0x43
#define OPCODE_FSTORE_1        0x44
#define OPCODE_FSTORE_2        0x45
#define OPCODE_FSTORE_3        0x46
#define OPCODE_FSUB            0x66
#define OPCODE_GETFIELD        0xb4
#define OPCODE_GETSTATIC       0xb2
#define OPCODE_GOTO            0xa7
#define OPCODE_GOTO_W          0xc8
#define OPCODE_I2B             0x91
#define OPCODE_I2C             0x92
#define OPCODE_I2D             0x87
#define OPCODE_I2F             0x86
#define OPCODE_I2L             0x85
#define OPCODE_I2S             0x93
#define OPCODE_IADD            0x60 // Add int
#define OPCODE_IALOAD          0x2e // Load int from array
#define OPCODE_IAND            0x7e // Boolean AND int
#define OPCODE_IASTORE         0x4f // Store into int array
#define OPCODE_ICONST_M1       0x02
#define OPCODE_ICONST_0        0x03
#define OPCODE_ICONST_1        0x04
#define OPCODE_ICONST_2        0x05
#define OPCODE_ICONST_3        0x06
#define OPCODE_ICONST_4        0x07
#define OPCODE_ICONST_5        0x08
#define OPCODE_IDIV            0x6c
#define OPCODE_IF_ACMPEQ       0x9f
#define OPCODE_IF_ACMPNE       0xa0
#define OPCODE_IF_ICMPLT       0xa1
#define OPCODE_IF_ICMPGE       0xa2
#define OPCODE_IF_ICMPGT       0xa3
#define OPCODE_IF_ICMPLE       0xa4
#define OPCODE_IFEQ            0x99
#define OPCODE_IFNE            0x9a
#define OPCODE_IFLT            0x9b
#define OPCODE_IFGE            0x9c
#define OPCODE_IFGT            0x9d
#define OPCODE_IFLE            0x9e
#define OPCODE_IFNONNULL       0xc7
#define OPCODE_IFNULL          0xc6
#define OPCODE_IINC            0x84
#define OPCODE_ILOAD           0x15
#define OPCODE_ILOAD_0         0x1a
#define OPCODE_ILOAD_1         0x1b
#define OPCODE_ILOAD_2         0x1c
#define OPCODE_ILOAD_3         0x1d
#define OPCODE_IMUL            0x68
#define OPCODE_INEG            0x74
#define OPCODE_INSTANCEOF      0xc1
#define OPCODE_INVOKEDYNAMIC   0xba
#define OPCODE_INVOKEINTERFACE 0xb9
#define OPCODE_INVOKESPECIAL   0xb7
#define OPCODE_INVOKESTATIC    0xb8
#define OPCODE_INVOKEVIRTUAL   0xb6
#define OPCODE_IOR             0x80
#define OPCODE_IREM            0x70
#define OPCODE_IRETURN         0xac
#define OPCODE_ISHL            0x78
#define OPCODE_ISHR            0x7a
#define OPCODE_ISTORE          0x36
#define OPCODE_ISTORE_0        0x3b
#define OPCODE_ISTORE_1        0x3c
#define OPCODE_ISTORE_2        0x3d
#define OPCODE_ISTORE_3        0x3e
#define OPCODE_ISUB            0x64
#define OPCODE_IUSHR           0x7c
#define OPCODE_IXOR            0x82
#define OPCODE_JSR             0xa8
#define OPCODE_JSR_W           0xc9
#define OPCODE_LAD             0x8a
#define OPCODE_LAF             0x89
#define OPCODE_L2I             0x88
#define OPCODE_LADD            0x61
#define OPCODE_LALOAD          0x2f
#define OPCODE_LAND            0x7f
#define OPCODE_LASTORE         0x50
#define OPCODE_LCMP            0x94
#define OPCODE_LCONST_0        0x09
#define OPCODE_LCONST_1        0x0a
#define OPCODE_LDC             0x12
#define OPCODE_LDC_W           0x13
#define OPCODE_LDC2_W          0x14
#define OPCODE_LDIV            0x6d
#define OPCODE_LLOAD           0x16
#define OPCODE_LLOAD_0         0x1e
#define OPCODE_LLOAD_1         0x1f
#define OPCODE_LLOAD_2         0x20
#define OPCODE_LLOAD_3         0x21
#define OPCODE_LMUL            0x69
#define OPCODE_LNEG            0x75
#define OPCODE_LOOKUPSWITCH    0xab
#define OPCODE_LOR             0x81
#define OPCODE_LREM            0x71
#define OPCODE_LRETURN         0xad
#define OPCODE_LSHL            0x79
#define OPCODE_LSHR            0x7b
#define OPCODE_LSTORE          0x37
#define OPCODE_LSTORE_0        0x3f
#define OPCODE_LSTORE_1        0x40
#define OPCODE_LSTORE_2        0x41
#define OPCODE_LSTORE_3        0x42
#define OPCODE_LSUB            0x65
#define OPCODE_LUSHR           0x7d
#define OPCODE_LXOR            0x83
#define OPCODE_MONITORENTER    0xc2
#define OPCODE_MONITOREXIT     0xc3
#define OPCODE_MULTIANEWARRAY  0xc5
#define OPCODE_NEW             0xbb
#define OPCODE_NEWARRAY        0xbc
#define OPCODE_NOP             0x00
#define OPCODE_POP             0x57
#define OPCODE_POP2            0x58
#define OPCODE_PUTFIELD        0xb5
#define OPCODE_PUTSTATIC       0xb3
#define OPCODE_RET             0xa9
#define OPCODE_RETURN          0xb1
#define OPCODE_SALOAD          0x35
#define OPCODE_SASTORE         0x56
#define OPCODE_SIPUSH          0x11
#define OPCODE_SWAP            0x5f
#define OPCODE_TABLESWITCH     0xaa
#define OPCODE_WIDE            0xc4


static void parse(uint32_t code){
    switch (code)
    {
    case OPCODE_AALOAD:
        OPCODE_aaload();
        break;
    case OPCODE_AASTORE:
        OPCODE_aastore();
        break;
    default:
        break;
    }
}

static void OPCODE_aaload(){

}

static void OPCODE_aastore(){
    
}