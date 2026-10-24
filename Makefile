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
        $(SRC_DIR)/hazard_unit.sv \
        $(SRC_DIR)/f_register_file.sv\
        $(SRC_DIR)/fpu.sv\
        $(SRC_DIR)/cpu_typedef_pkg.svh 

VERILOG_FILES := $(filter-out %.svh, $(SRCS))

VFLAGS := --binary --timing -Wall -Wno-fatal \
          -Wno-DECLFILENAME -Wno-IMPORTSTAR -Wno-UNUSEDSIGNAL \
          -Wno-CASEINCOMPLETE -Wno-SYNCASYNCNET \
          --trace -I$(SRC_DIR)

BUILD_DIR := build
ASM_BIN   := assembler/target/debug/assembler

.PHONY: all test clean format lint sim

all: $(TARGET)

$(TARGET): $(SRCS)
	verilator $(VFLAGS) $(SRCS)

test: $(TARGET)
	./scripts/test.sh $(TEST).s $(TARGET)

test_only: $(TARGET)

	$(TARGET)

lint:
	verilator --lint-only -Isrc $(SRCS)

format:
	verible-verilog-format --inplace $(SRCS)

diff: 
	diff -u -w $(DOC1).log $(DOC2).log

sim:
        sim: $(TARGET)
	mkdir -p $(BUILD_DIR)
	$(ASM_BIN) --input $(TEST).s --output $(BUILD_DIR)/$(notdir $(TEST)).bin --spike-sim
	hexdump -v -e '1/4 "%08x\n"' $(BUILD_DIR)/$(notdir $(TEST)).bin > $(BUILD_DIR)/$(notdir $(TEST)).hex
	timeout 20 $(TARGET) +loadhex=$(BUILD_DIR)/$(notdir $(TEST)).hex

clean:
	rm -rf obj_dir *.vcd build
	

