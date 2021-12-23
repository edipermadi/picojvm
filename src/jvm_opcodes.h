#ifndef __PICOJVM_OPCODES_H__
#define __PICOJVM_OPCODES_H__

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
#define OPCODE_CASTORE         0x55 // Store into char array
#define OPCODE_CHECKCAST       0xc0 // Check whether object is of given type
#define OPCODE_D2F             0x90 // Convert double to float
#define OPCODE_D2I             0x8e // Convert double to int
#define OPCODE_D2L             0x8f // Convert double to long
#define OPCODE_DADD            0x63 // Add double
#define OPCODE_DALOAD          0x31 // Load double from array
#define OPCODE_DASTORE         0x52 // Store into double array
#define OPCODE_DCMPG           0x98 // Compare double
#define OPCODE_DCMPL           0x97 // Compare double
#define OPCODE_DCONST_0        0x0e // Push double
#define OPCODE_DCONST_1        0x0f // Push double
#define OPCODE_DDIV            0x6f // Divide double
#define OPCODE_DLOAD           0x18 // Load double from local variable
#define OPCODE_DLOAD_0         0x26 // Load double from local variable
#define OPCODE_DLOAD_1         0x27 // Load double from local variable
#define OPCODE_DLOAD_2         0x28 // Load double from local variable
#define OPCODE_DLOAD_3         0x29 // Load double from local variable
#define OPCODE_DMUL            0x6b // Multiply double
#define OPCODE_DNEG            0x77 // Negate double
#define OPCODE_DREM            0x73 // Remainder double
#define OPCODE_DRETURN         0xaf // Return double from method
#define OPCODE_DSTORE          0x39 // Store double into local variable
#define OPCODE_DSTORE_0        0x47 // Store double into local variable
#define OPCODE_DSTORE_1        0x48 // Store double into local variable
#define OPCODE_DSTORE_2        0x49 // Store double into local variable
#define OPCODE_DSTORE_3        0x4a // Store double into local variable
#define OPCODE_DSUB            0x67 // Subtract double
#define OPCODE_DUP             0x59 // Duplicate the top operand stack value
#define OPCODE_DUP_X1          0x5a // Duplicate the top operand stack value and insert two values down
#define OPCODE_DUP_X2          0x5b // Duplicate the top operand stack value and insert two or three values down
#define OPCODE_DUP2            0x5c // Duplicate the top one or two operand stack values
#define OPCODE_DUP2_X1         0x5d // Duplicate the top one or two operand stack values and insert two or three values down
#define OPCODE_DUP2_X2         0x5e // Duplicate the top one or two operand stack values and insert two, three, or four values down
#define OPCODE_F2D             0x8d // Convert float to double
#define OPCODE_F2I             0x8b // Convert float to int
#define OPCODE_F2L             0x8c // Convert float to long
#define OPCODE_FADD            0x62 // Add float
#define OPCODE_FALOAD          0x30 // Load float from array
#define OPCODE_FASTORE         0x51 // Store into float array
#define OPCODE_FCMPG           0x96 // Compare float
#define OPCODE_FCMPL           0x95 // Compare float
#define OPCODE_FCONST_0        0x0b // Push float
#define OPCODE_FCONST_1        0x0c // Push float
#define OPCODE_FCONST_2        0x0d // Push float
#define OPCODE_FDIV            0x6e // Divide float
#define OPCODE_FLOAD           0x17 // Load float from local variable
#define OPCODE_FLOAD_0         0x22 // Load float from local variable
#define OPCODE_FLOAD_1         0x23 // Load float from local variable
#define OPCODE_FLOAD_2         0x24 // Load float from local variable
#define OPCODE_FLOAD_3         0x25 // Load float from local variable
#define OPCODE_FMUL            0x6a // Multiply float
#define OPCODE_FNEG            0x76 // Negate float
#define OPCODE_FREM            0x72 // Remainder float
#define OPCODE_FRETURN         0xae // Return float from method
#define OPCODE_FSTORE          0x38 // Store float into local variable
#define OPCODE_FSTORE_0        0x43 // Store float into local variable
#define OPCODE_FSTORE_1        0x44 // Store float into local variable
#define OPCODE_FSTORE_2        0x45 // Store float into local variable
#define OPCODE_FSTORE_3        0x46 // Store float into local variable
#define OPCODE_FSUB            0x66 // Subtract float
#define OPCODE_GETFIELD        0xb4 // Fetch field from object
#define OPCODE_GETSTATIC       0xb2 // Get static field from class
#define OPCODE_GOTO            0xa7 // Branch always
#define OPCODE_GOTO_W          0xc8 // Branch always (wide index)
#define OPCODE_I2B             0x91 // Convert int to byte
#define OPCODE_I2C             0x92 // Convert int to char
#define OPCODE_I2D             0x87 // Convert int to double
#define OPCODE_I2F             0x86 // Convert int to float
#define OPCODE_I2L             0x85 // Convert int to long
#define OPCODE_I2S             0x93 // Convert int to short
#define OPCODE_IADD            0x60 // Add int
#define OPCODE_IALOAD          0x2e // Load int from array
#define OPCODE_IAND            0x7e // Boolean AND int
#define OPCODE_IASTORE         0x4f // Store into int array
#define OPCODE_ICONST_M1       0x02 // Push int constant
#define OPCODE_ICONST_0        0x03 // Push int constant
#define OPCODE_ICONST_1        0x04 // Push int constant
#define OPCODE_ICONST_2        0x05 // Push int constant
#define OPCODE_ICONST_3        0x06 // Push int constant
#define OPCODE_ICONST_4        0x07 // Push int constant
#define OPCODE_ICONST_5        0x08 // Push int constant
#define OPCODE_IDIV            0x6c // Divide int
#define OPCODE_IF_ACMPEQ       0x9f // Branch if reference comparison succeeds
#define OPCODE_IF_ACMPNE       0xa0 // Branch if reference comparison succeeds
#define OPCODE_IF_ICMPLT       0xa1 // Branch if int comparison succeeds
#define OPCODE_IF_ICMPGE       0xa2 // Branch if int comparison succeeds
#define OPCODE_IF_ICMPGT       0xa3 // Branch if int comparison succeeds
#define OPCODE_IF_ICMPLE       0xa4 // Branch if int comparison succeeds
#define OPCODE_IFEQ            0x99 // Branch if int comparison with zero succeeds
#define OPCODE_IFNE            0x9a // Branch if int comparison with zero succeeds
#define OPCODE_IFLT            0x9b // Branch if int comparison with zero succeeds
#define OPCODE_IFGE            0x9c // Branch if int comparison with zero succeeds
#define OPCODE_IFGT            0x9d // Branch if int comparison with zero succeeds
#define OPCODE_IFLE            0x9e // Branch if int comparison with zero succeeds
#define OPCODE_IFNONNULL       0xc7 // Branch if reference not null
#define OPCODE_IFNULL          0xc6 // Branch if reference is null
#define OPCODE_IINC            0x84 // Increment local variable by constant
#define OPCODE_ILOAD           0x15 // Load int from local variable
#define OPCODE_ILOAD_0         0x1a // Load int from local variable
#define OPCODE_ILOAD_1         0x1b // Load int from local variable
#define OPCODE_ILOAD_2         0x1c // Load int from local variable
#define OPCODE_ILOAD_3         0x1d // Load int from local variable
#define OPCODE_IMUL            0x68 // Multiply int
#define OPCODE_INEG            0x74 // Negate int
#define OPCODE_INSTANCEOF      0xc1 // Determine if object is of given type
#define OPCODE_INVOKEDYNAMIC   0xba // Invoke a dynamically-computed call site
#define OPCODE_INVOKEINTERFACE 0xb9 // Invoke interface method
#define OPCODE_INVOKESPECIAL   0xb7 // Invoke instance method; direct invocation of instance initialization methods and methods of the current class and its supertypes
#define OPCODE_INVOKESTATIC    0xb8 // Invoke a class (static) method
#define OPCODE_INVOKEVIRTUAL   0xb6 // Invoke instance method; dispatch based on class
#define OPCODE_IOR             0x80 // Boolean OR int
#define OPCODE_IREM            0x70 // Remainder int
#define OPCODE_IRETURN         0xac // Return int from method
#define OPCODE_ISHL            0x78 // Shift left int
#define OPCODE_ISHR            0x7a // Arithmetic shift right int
#define OPCODE_ISTORE          0x36 // Store int into local variable
#define OPCODE_ISTORE_0        0x3b // Store int into local variable
#define OPCODE_ISTORE_1        0x3c // Store int into local variable
#define OPCODE_ISTORE_2        0x3d // Store int into local variable
#define OPCODE_ISTORE_3        0x3e // Store int into local variable
#define OPCODE_ISUB            0x64 // Subtract int
#define OPCODE_IUSHR           0x7c // Logical shift right int
#define OPCODE_IXOR            0x82 // Boolean XOR int
#define OPCODE_JSR             0xa8 // Jump subroutine
#define OPCODE_JSR_W           0xc9 // Jump subroutine (wide index)
#define OPCODE_L2D             0x8a // Convert long to double
#define OPCODE_L2F             0x89 // Convert long to float
#define OPCODE_L2I             0x88 // Convert long to int
#define OPCODE_LADD            0x61 // Add long
#define OPCODE_LALOAD          0x2f // Load long from array
#define OPCODE_LAND            0x7f // Boolean AND long
#define OPCODE_LASTORE         0x50 // Store into long array
#define OPCODE_LCMP            0x94 // Compare long
#define OPCODE_LCONST_0        0x09 // Push long constant
#define OPCODE_LCONST_1        0x0a // Push long constant
#define OPCODE_LDC             0x12 // Push item from run-time constant pool
#define OPCODE_LDC_W           0x13 // Push item from run-time constant pool (wide index)
#define OPCODE_LDC2_W          0x14 // Push long or double from run-time constant pool (wide index)
#define OPCODE_LDIV            0x6d // Divide long
#define OPCODE_LLOAD           0x16 // Load long from local variable
#define OPCODE_LLOAD_0         0x1e // Load long from local variable
#define OPCODE_LLOAD_1         0x1f // Load long from local variable
#define OPCODE_LLOAD_2         0x20 // Load long from local variable
#define OPCODE_LLOAD_3         0x21 // Load long from local variable
#define OPCODE_LMUL            0x69 // Multiply long
#define OPCODE_LNEG            0x75 // Negate long
#define OPCODE_LOOKUPSWITCH    0xab // Access jump table by key match and jump
#define OPCODE_LOR             0x81 // Boolean OR long
#define OPCODE_LREM            0x71 // Remainder long
#define OPCODE_LRETURN         0xad // Return long from method
#define OPCODE_LSHL            0x79 // Shift left long
#define OPCODE_LSHR            0x7b // Arithmetic shift right long
#define OPCODE_LSTORE          0x37 // Store long into local variable
#define OPCODE_LSTORE_0        0x3f // Store long into local variable
#define OPCODE_LSTORE_1        0x40 // Store long into local variable
#define OPCODE_LSTORE_2        0x41 // Store long into local variable
#define OPCODE_LSTORE_3        0x42 // Store long into local variable
#define OPCODE_LSUB            0x65 // Subtract long
#define OPCODE_LUSHR           0x7d // Logical shift right long
#define OPCODE_LXOR            0x83 // Boolean XOR long
#define OPCODE_MONITORENTER    0xc2 // Enter monitor for object
#define OPCODE_MONITOREXIT     0xc3 // Exit monitor for object
#define OPCODE_MULTIANEWARRAY  0xc5 // Create new multidimensional array
#define OPCODE_NEW             0xbb // Create new object
#define OPCODE_NEWARRAY        0xbc // Create new array
#define OPCODE_NOP             0x00 // Do nothing
#define OPCODE_POP             0x57 // Pop the top operand stack value
#define OPCODE_POP2            0x58 // Pop the top one or two operand stack values
#define OPCODE_PUTFIELD        0xb5 // Set field in object
#define OPCODE_PUTSTATIC       0xb3 // Set static field in class
#define OPCODE_RET             0xa9 // Return from subroutine
#define OPCODE_RETURN          0xb1 // Return void from method
#define OPCODE_SALOAD          0x35 // Load short from array
#define OPCODE_SASTORE         0x56 // Store into short array
#define OPCODE_SIPUSH          0x11 // Push short
#define OPCODE_SWAP            0x5f // Swap the top two operand stack values
#define OPCODE_TABLESWITCH     0xaa // Access jump table by index and jump
#define OPCODE_WIDE            0xc4 // Extend local variable index by additional bytes

#endif
