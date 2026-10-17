module instruction_memory #(
    parameter int MEM_DEPTH = 1024
) (
    input logic clk,
    input logic rst_n,
    input logic [31:0] addr,
    output logic [31:0] data
);

  logic [31:0] internal_addr;
  assign internal_addr = addr - 32'h8000_0000;

`ifdef VERILATOR
  string hex_file;
`endif
  logic [31:0] temp_mem[MEM_DEPTH];


  logic [7:0] mem0[MEM_DEPTH];
  logic [7:0] mem1[MEM_DEPTH];
  logic [7:0] mem2[MEM_DEPTH];
  logic [7:0] mem3[MEM_DEPTH];

  assign {mem3[0], mem2[0], mem1[0], mem0[0]} = 32'h00a00293;
  assign {mem3[1], mem2[1], mem1[1], mem0[1]} = 32'h00000313;
  assign {mem3[2], mem2[2], mem1[2], mem0[2]} = 32'h00100393;
  assign {mem3[3], mem2[3], mem1[3], mem0[3]} = 32'h02505463;
  assign {mem3[4], mem2[4], mem1[4], mem0[4]} = 32'h00100e13;
  assign {mem3[5], mem2[5], mem1[5], mem0[5]} = 32'h005e5c63;
  assign {mem3[6], mem2[6], mem1[6], mem0[6]} = 32'h00730eb3;
  assign {mem3[7], mem2[7], mem1[7], mem0[7]} = 32'h00038313;
  assign {mem3[8], mem2[8], mem1[8], mem0[8]} = 32'h000e8393;
  assign {mem3[9], mem2[9], mem1[9], mem0[9]} = 32'h001e0e13;
  assign {mem3[10], mem2[10], mem1[10], mem0[10]} = 32'hfedff06f;
  assign {mem3[11], mem2[11], mem1[11], mem0[11]} = 32'h00038513;
  assign {mem3[12], mem2[12], mem1[12], mem0[12]} = 32'h0080006f;
  assign {mem3[13], mem2[13], mem1[13], mem0[13]} = 32'h00030513;
  assign {mem3[14], mem2[14], mem1[14], mem0[14]} = 32'h700000b7;
  assign {mem3[15], mem2[15], mem1[15], mem0[15]} = 32'h0f808093;
  assign {mem3[16], mem2[16], mem1[16], mem0[16]} = 32'h00100113;
  assign {mem3[17], mem2[17], mem1[17], mem0[17]} = 32'h0020a023;
  assign {mem3[18], mem2[18], mem1[18], mem0[18]} = 32'h00100073;


  //assign {mem3[0], mem2[0], mem1[0], mem0[0]} = 32'h00000313;  // addi x6, x0, 0
  //assign {mem3[1], mem2[1], mem1[1], mem0[1]} = 32'h00130313;  // addi x6, x6, 1
  //assign {mem3[0], mem2[0], mem1[0], mem0[0]} = 32'h00000263;
  //assign {mem3[1], mem2[1], mem1[1], mem0[1]} = 32'h00100073;  // ebreak

  /*// 0: beq x0, x0, +8  (0x8000_0008 へジャンプして ebreak をスキップ)
  assign {mem3[0], mem2[0], mem1[0], mem0[0]} = 32'h00000463;

  // 1: ebreak          (分岐失敗ならここで halt して x10=0 のまま)
  assign {mem3[1], mem2[1], mem1[1], mem0[1]} = 32'h00100073;

  // 2: addi x10, x0, 5 (分岐成功ならここへ着地して x10 に 5 を代入)
  assign {mem3[2], mem2[2], mem1[2], mem0[2]} = 32'h00500513;

  // 3: ebreak          (正常終了)
  assign {mem3[3], mem2[3], mem1[3], mem0[3]} = 32'h00100073;*/

  //assign {mem3[0], mem2[0], mem1[0], mem0[0]} = 32'h00500513;  // addi x10, x0, 5
  //assign {mem3[1], mem2[1], mem1[1], mem0[1]} = 32'h00100073;  // ebreak

  /*assign {mem3[0], mem2[0], mem1[0], mem0[0]} = 32'h00000663;  // beq x0, x0, +12
  assign {mem3[1], mem2[1], mem1[1], mem0[1]} = 32'h00100513;  // addi x10, x0, 1 (飛ばされるべき)
  assign {mem3[2], mem2[2], mem1[2], mem0[2]} = 32'h00100073;  // ebreak (飛ばされるべき)
  assign {mem3[3], mem2[3], mem1[3], mem0[3]} = 32'h00500513;  // addi x10, x0, 5
  assign {mem3[4], mem2[4], mem1[4], mem0[4]} = 32'h00100073;*/  // ebreak



  wire [$clog2(MEM_DEPTH)-1:0] word_idx = internal_addr[$clog2(MEM_DEPTH)+1:2];

  assign data = {mem3[word_idx], mem2[word_idx], mem1[word_idx], mem0[word_idx]};

`ifdef VERILATOR
  initial begin
    for (int i = 0; i < MEM_DEPTH; i++) begin
      mem0[i] = 8'd0;
      mem1[i] = 8'd0;
      mem2[i] = 8'd0;
      mem3[i] = 8'd0;
    end


    if ($value$plusargs("loadhex=%s", hex_file)) begin
      $readmemh(hex_file, temp_mem);
    end else begin
      $readmemh("program.hex", temp_mem);
    end

    for (int i = 0; i < MEM_DEPTH; i++) begin
      mem0[i] = temp_mem[i][7:0];
      mem1[i] = temp_mem[i][15:8];
      mem2[i] = temp_mem[i][23:16];
      mem3[i] = temp_mem[i][31:24];
    end
  end
`endif


endmodule



