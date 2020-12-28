# gkcon01

![gkcon01](imgur.com image replace me!)

Holtek HT82K629A のキーマップを模したキーマップをSTM32F3Discovery上で(だいたい)再現したキーボードファームウェアです。
QMK_firmwareに組み込んで使用します。

qmk_firmware/keyboards 以下にソースの gkcon01 ディレクトリをまるっとコピーしてビルドしてください。
ボードへの書き込みはST-LINK/V2.1相当の新しめのF3Discoveryではマスストレージクラスとして見えているファイルシステムにコピーするだけです。


ピンアサイン
　R0-R7　　　C1,C0,C3,C2,A1,F2,A3,F4
　C0-C19　　 B1,B0,E7,B2, B11,B10,B13,B12, B15,B14,D9,D8, D11,D10,D13,D12, D15,D14,C6,C7
　NUM LED    E9
　CAPS LED   E8
　SCROLL LED E10


* Keyboard Maintainer: [Antarcticlion](https://github.com/antarcticlion)(twitter:@antarcticlion)
* Hardware Supported: STM32F3Discovery
* Hardware Availability: https://www.st.com/ja/evaluation-tools/stm32f3discovery.html

Make example for this keyboard (after setting up your build environment):

    qmk compile gkcon01 -km default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
