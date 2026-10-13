_start:

    addi x1, x0, 6
    addi x2, x0, 7
    mul  x10, x1, x2            
    addi x4, x0, 42
    bne  x10, x4, fail_test1

    addi x1, x0, 10
    addi x2, x0, -3
    mul  x11, x1, x2             
    addi x4, x0, -30
    bne  x11, x4, fail_test2

    addi x1, x0, -5
    addi x2, x0, -4
    mul  x12, x1, x2             
    addi x4, x0, 20
    bne  x12, x4, fail_test3

    addi x1, x0, -2
    addi x2, x0, 3
    mulh x13, x1, x2             
    addi x4, x0, -1
    bne  x13, x4, fail_test4

    lui  x1, 0x80000             
    addi x2, x0, 2
    mulhu x14, x1, x2            
    addi x4, x0, 1
    bne  x14, x4, fail_test5


    addi x1, x0, -1
    addi x2, x0, 2
    mulhsu x15, x1, x2    
    addi x4, x0, -1
    bne  x15, x4, fail_test6


    addi x3, x0, 1             
    sw   x10, 0(x0)            
    ebreak                

fail_test1:
    addi x3, x0, 101
    ebreak
fail_test2:
    addi x3, x0, 102
    ebreak
fail_test3:
    addi x3, x0, 103
    ebreak
fail_test4:
    addi x3, x0, 104
    ebreak
fail_test5:
    addi x3, x0, 105
    ebreak
fail_test6:
    addi x3, x0, 106
    ebreak


