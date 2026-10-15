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
        $(SRC_DIR)/cpu_typedef_pkg.svh 

VERILOG_FILES := $(filter-out %.svh, $(SRCS))

VFLAGS := --binary --timing -Wall -Wno-fatal \
          -Wno-DECLFILENAME -Wno-IMPORTSTAR -Wno-UNUSEDSIGNAL \
          -Wno-CASEINCOMPLETE -Wno-SYNCASYNCNET \
          --trace -I$(SRC_DIR)

.PHONY: all test clean format lint

all: $(TARGET)

$(TARGET): $(SRCS)
	verilator $(VFLAGS) $(SRCS)

test: $(TARGET)
	./scripts/test.sh $(TEST).s $(TARGET)

test_only: $(TARGET)

	$(TARGET)

lint:
	verible-verilog-lint $(SRCS)

format:
	verible-verilog-format --inplace $(SRCS)

diff: 
	diff -u -w $(DOC1).log $(DOC2).log

clean:
	rm -rf obj_dir *.vcd build
	

