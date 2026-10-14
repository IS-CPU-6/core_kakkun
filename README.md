# core_kakkun
[![Release](https://img.shields.io/badge/ISA-1st_v0.0.6-blue)](https://docs.google.com/spreadsheets/d/1nd4VlMRf07WgoH0fAjvWLOeL6DX_4LZD6E22ocDrY7Y/edit?hl=ja&gid=584437860#gid=584437860)

RV32Iのsystem verilog実装です

# セットアップ
```
git submodule update --init --recursive --remote
sudo chmod +x scripts/*.sh
sudo chmod +x assembler/scripts/*.sh
```


# 動かし方
```
make test TEST=[テスト名]
ex)make test TEST=test/fibonacci
```
- 詳細やバイナリはbuild/*.logに送られる。
