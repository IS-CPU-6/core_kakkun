_start:
    addi x1, x0, 15
    addi x2, x0, 25
    add  x5, x1, x2
    sub  x6, x2, x1

    addi x7, x0, 15
    andi x8, x7, 10
    ori  x9, x8, 5
    xori x10, x9, 3

    addi x11, x0, 48
    addi x12, x0, 63
    and  x13, x11, x12
    or   x14, x11, x10
    xor  x15, x14, x11

    addi x16, x0, 1
    slli x17, x16, 4
    
    addi x18, x0, 4
    sll  x19, x16, x18

    addi x20, x0, 128
    srli x21, x20, 3

    addi x22, x0, 3
    srl  x23, x20, x22

    addi x24, x0, -16
    srai x25, x24, 2

    addi x26, x0, 2
    sra  x27, x24, x26

    addi x28, x0, -5
    addi x29, x0, 5

    slti x30, x28, 0
    slt  x31, x28, x29

    sltiu x4, x28, 10
    sltu  x2, x29, x28

    addi x1, x0, 40
    bne  x5, x1, fail_add

    addi x1, x0, 10
    bne  x6, x1, fail_sub

    addi x1, x0, 10
    bne  x8, x1, fail_andi

    addi x1, x0, 15
    bne  x9, x1, fail_ori

    addi x1, x0, 12
    bne  x10, x1, fail_xori

    addi x1, x0, 48
    bne  x13, x1, fail_and

    addi x1, x0, 60
    bne  x14, x1, fail_or

    addi x1, x0, 12
    bne  x15, x1, fail_xor

    addi x1, x0, 16
    bne  x17, x1, fail_slli

    addi x1, x0, 16
    bne  x19, x1, fail_sll

    addi x1, x0, 16
    bne  x21, x1, fail_srli

    addi x1, x0, 16
    bne  x23, x1, fail_srl

    addi x1, x0, -4
    bne  x25, x1, fail_srai

    addi x1, x0, -4
    bne  x27, x1, fail_sra

    addi x1, x0, 1
    bne  x30, x1, fail_slti

    addi x1, x0, 1
    bne  x31, x1, fail_slt

    addi x1, x0, 0
    bne  x4, x1, fail_sltiu

    addi x1, x0, 1
    bne  x2, x1, fail_sltu

    addi x3, x0, 1
    beq x0, x0, exit

fail_add:
    addi x3, x0, 101
    beq x0, x0, exit

fail_sub:
    addi x3, x0, 102
    beq x0, x0, exit

fail_andi:
    addi x3, x0, 103
    beq x0, x0, exit

fail_ori:
    addi x3, x0, 104
    beq x0, x0, exit

fail_xori:
    addi x3, x0, 105
    beq x0, x0, exit

fail_and:
    addi x3, x0, 106
    beq x0, x0, exit

fail_or:
    addi x3, x0, 107
    beq x0, x0, exit

fail_xor:
    addi x3, x0, 108
    beq x0, x0, exit

fail_slli:
    addi x3, x0, 109
    beq x0, x0, exit

fail_sll:
    addi x3, x0, 110
    beq x0, x0, exit

fail_srli:
    addi x3, x0, 111
    beq x0, x0, exit

fail_srl:
    addi x3, x0, 112
    beq x0, x0, exit

fail_srai:
    addi x3, x0, 113
    beq x0, x0, exit

fail_sra:
    addi x3, x0, 114
    beq x0, x0, exit

fail_slti:
    addi x3, x0, 115
    beq x0, x0, exit

fail_slt:
    addi x3, x0, 116
    beq x0, x0, exit

fail_sltiu:
    addi x3, x0, 117
    beq x0, x0, exit

fail_sltu:
    addi x3, x0, 118
    beq x0, x0, exit

exit: