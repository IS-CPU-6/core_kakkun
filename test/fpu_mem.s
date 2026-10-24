lui   x1, 0x6         
lui   x5, 0x3fc00
lui   x6, 0x70000
addi  x6, x6, 0x200
sw    x5, 0(x6)
flw   f1, 0(x6)
fsw   f1, 4(x6)
lw    x10, 4(x6)
flw   f2, 0(x6)
addi  x0, x0, 0
addi  x0, x0, 0
addi  x0, x0, 0
fsw   f2, 8(x6)
lw    x11, 8(x6)