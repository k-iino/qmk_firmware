# My Keymap for XIUDI's 60% XD60 PCB

![keymap_image](https://i.imgur.com/EXVvZAj.png)

## コンパイル方法

```bash
$ qmk compile -kb xd60/rev3 -km iinok
```

## Firmware の Flash 方法

接続中に DFU モード（裏のリセットボタンを押下）に切り替えてから以下のコマンドを実行。

```bash
$ sudo dfu-programmer atmega32u4 erase && sudo dfu-programmer atmega32u4 flash xd60_rev3_iinok.hex && sudo dfu-programmer atmega32u4 reset
```
