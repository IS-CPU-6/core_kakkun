# .hexを受け取って走らす
spike --pc=0x00000000 --isa=rv32imf \
  -m0x0:0x20000000 \
  -m0x80000000:0x1000 \
  --log-commits $1 > $2