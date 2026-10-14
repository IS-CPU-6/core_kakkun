set -euo pipefail

echo hello

asm_dir=$(dirname "$1")
asm_base=$(basename "$1" .s)
this_dir=$(dirname $0)
assembler_dir=$this_dir/../assembler
build_dir=$this_dir/../build
target=$2

mkdir -p $build_dir

# .s -> .elf, .bin
cargo run --manifest-path $assembler_dir/Cargo.toml -- --input $1 --output $build_dir/$asm_base.bin --spike-sim
$assembler_dir/scripts/generate_elf.sh $build_dir/$asm_base.bin
$assembler_dir/scripts/run_spike.sh $build_dir/$asm_base.elf $build_dir/$asm_base.log

# .bin -> .hex
hexdump -v -e '1/4 "%08x\n"' $build_dir/$asm_base.bin > $build_dir/$asm_base.hex

$target +loadhex=$build_dir/$build_dir/$asm_base.hex