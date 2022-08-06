# Project 5x07

A low profile ortholinear split keyboard with per-key RGB.

This is a project that began as my first adventure into PCB and keyboard design.

## Parts required

This table is for one PCB. You need double of this for both hands.

| Part                                                                                                                                   | Part Details | Amount | Notes |
| -------------------------------------------------------------------------------------------------------------------------------------- | ------------ | ------ | ----- |
| [ATmega32u4-AU](https://item.taobao.com/item.htm?id=677430063008)                                                                      | TQFP-44      | 1      |       |
| [Korean Hroparts Elec TYPE-C-31-M-12](https://www.lcsc.com/product-detail/USB-Type-C_Korean-Hroparts-Elec-TYPE-C-31-M-12_C165948.html) |              | 1      |       |
| [Kailh choc hotswap socket](https://item.taobao.com/item.htm?id=595850038767)                                                          |              | 35     |       |
| [SK6812 Mini-E Reverse Mount LED](https://item.taobao.com/item.htm?id=669061805532)                                                    |              | 35     |       |
| 16MHz 3225 SMD Crystal                                                                                                                 |              | 1      |       |
| SKQG push button switch                                                                                                                |              | 1      |       |
| 0608/2012 SMD Resistor                                                                                                                 | 10kΩ         | 1      |       |
|                                                                                                                                        | 500Ω         | 1      |       |
|                                                                                                                                        | 5.1kΩ        | 2      |       |
|                                                                                                                                        | 22Ω          | 2      |       |
|                                                                                                                                        | 330Ω         | 1      |       |
| 1206/3212 SMD Fuse                                                                                                                     | 500mA        | 1      |       |
| 0608/2012 SMD Diodes                                                                                                                   |              | 35     |       |
| 0608/2012 SMD Capacitors                                                                                                               | 22 pF        | 2      |       |
|                                                                                                                                        | 1 uF         | 1      |       |
|                                                                                                                                        | 10 uF        | 1      |       |
|                                                                                                                                        | 0.1 uF       | 4      |       |

## Assembly instructions

The board is designed to be reversible. You can flip the PCB to the other side to serve as the other half.

The parts that are mountable on both sides of the PCB are the type C port, the reset button and the keyboard matrix (switch, LED, diode).

The side for mounting type C port is up to your will, but I would recommend mounting it on the bottom side relative to the switch. The reset button should always face up for ease of access. The LEDs for keyboard are reverse mounted.

If you have assembled it correctly then for LHS board the MCU should be on the left and bottom side, and for RHS board the MCU should be on the right and top side.
