# Project 5x07

A low profile ortholinear split keyboard with per-key RGB.

This is a project that began as my first adventure into PCB and keyboard design.

## Parts required

**This table is for one PCB. You need double of this for both hands.**

| Part                                                                                                                                                   | Part Details  | Amount | Notes                         |
| ------------------------------------------------------------------------------------------------------------------------------------------------------ | ------------- | ------ | ----------------------------- |
| [ATmega32u4-AU](https://item.taobao.com/item.htm?id=677430063008)                                                                                      | TQFP-44       | 1      |                               |
| [Korean Hroparts Elec TYPE-C-31-M-12](https://www.lcsc.com/product-detail/USB-Type-C_Korean-Hroparts-Elec-TYPE-C-31-M-12_C165948.html)                 |               | 1      |                               |
| [Korean Hroparts ELEC PJ-3200B-4A TRRS Jack](https://www.lcsc.com/product-detail/Audio-Video-Connectors_Korean-Hroparts-Elec-PJ-3200B-4A_C136687.html) |               | 1      | For split keyboard connection |
| [Kailh choc hotswap socket](https://item.taobao.com/item.htm?id=595850038767)                                                                          |               | 35     |                               |
| [SK6812 Mini-E Reverse Mount LED](https://item.taobao.com/item.htm?id=669061805532)                                                                    |               | 35     |                               |
| 16MHz 3225 SMD Crystal                                                                                                                                 |               | 1      |                               |
| SKQG push button switch                                                                                                                                |               | 1      | For reset circuit             |
| 0608/2012 SMD Resistor                                                                                                                                 | 10kΩ          | 1      | For MCU HWB                   |
|                                                                                                                                                        | 500Ω          | 1      | For keyboard LED              |
|                                                                                                                                                        | 5.1kΩ         | 2      | For USB-C CC                  |
|                                                                                                                                                        | 22Ω           | 2      | For USB-C data                |
|                                                                                                                                                        | 330Ω          | 1      | For reset circuit             |
|                                                                                                                                                        | 3.3k          | 2      | For TRRS jack                 |
| 1206/3212 SMD Fuse                                                                                                                                     | 500mA         | 1      |                               |
| Diodes                                                                                                                                                 | 1N4148 or SMD | 35     |                               |
| 0608/2012 SMD Capacitors                                                                                                                               | 22 pF         | 2      | For crystal                   |
|                                                                                                                                                        | 1 uF          | 1      | For MCU UCAP                  |
|                                                                                                                                                        | 10 uF         | 1      | For decoupling                |
|                                                                                                                                                        | 0.1 uF        | 4      | For decoupling                |

## Assembly instructions

The board is designed to be reversible. You can flip the PCB to the other side to serve as the other half.

The parts that are mountable on both sides of the PCB are the type C port, the reset button, the TRRS jack and the keyboard matrix (switch, LED, diode).

The side for mounting type C port and TRRS jack is up to your will. The reset button should always face up for ease of access. The LEDs for keyboard are reverse mounted.


