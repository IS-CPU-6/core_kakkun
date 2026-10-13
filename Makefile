TARGET := obj_dir/Vmain

SRC_DIR := src

SRCS := $(SRC_DIR)/main.sv \
        $(SRC_DIR)/cpu_top.sv \
        $(SRC_DIR)/instruction_memory.sv \
        $(SRC_DIR)/instruction_decoder.sv \
        $(SRC_DIR)/control_unit.sv \
        $(SRC_DIR)/immgen.sv \
        $(SRC_DIR)/register_file.sv \
        $(SRC_DIR)/alu.sv \
        $(SRC_DIR)/data_memory.sv \
        $(SRC_DIR)/cpu_typedef.svh 

VERILOG_FILES := $(filter-out %.svh, $(SRCS))

VFLAGS := --binary --timing -Wall -Wno-fatal \
          -Wno-DECLFILENAME -Wno-IMPORTSTAR -Wno-UNUSEDSIGNAL \
          -Wno-CASEINCOMPLETE -Wno-SYNCASYNCNET \
          --trace -I$(SRC_DIR)

%.hex: %.s
	cargo run --manifest-path ./assembler/Cargo.toml -- --input $< --output temp.bin
	hexdump -v -e '1/4 "%08x\n"' temp.bin > $@
	rm -f temp.bin

all: $(TARGET)

$(TARGET): $(SRCS)
	@echo "=== Source updated! Rebuilding Verilator simulation model... ==="
	verilator $(VFLAGS) $(SRCS)
	@echo "=== Build Complete: $@ ==="

test: $(TARGET) $(TEST).hex
	@echo "=== Running test for $(TEST) ==="
	./$(TARGET) +loadhex=$(TEST).hex

clean:
	rm -rf obj_dir *.vcd
	

