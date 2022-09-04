# Project 5x07

A low profile ortholinear split keyboard with per-key RGB.

This is a project that began as my first adventure into PCB and keyboard design.

![v3rgb.png](./assets/v3rgb.png)

## Parts required

**This table is for one PCB. You need double of this for both hands.**

| Part                                                                                                                                                   | Part Details                                                                                                                                                                        | Amount | Notes                           |
| ------------------------------------------------------------------------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------ | ------------------------------- |
| [ATmega32u4-AU](https://item.taobao.com/item.htm?id=677430063008)                                                                                      | TQFP-44                                                                                                                                                                             | 1      |                                 |
| [Korean Hroparts Elec TYPE-C-31-M-12](https://www.lcsc.com/product-detail/USB-Type-C_Korean-Hroparts-Elec-TYPE-C-31-M-12_C165948.html)                 |                                                                                                                                                                                     | 1      |                                 |
| [Korean Hroparts ELEC PJ-3200B-4A TRRS Jack](https://www.lcsc.com/product-detail/Audio-Video-Connectors_Korean-Hroparts-Elec-PJ-3200B-4A_C136687.html) |                                                                                                                                                                                     | 1      | For split keyboard connection   |
| [SK6812 Mini-E Reverse Mount LED](https://item.taobao.com/item.htm?id=669061805532)                                                                    |                                                                                                                                                                                     | 35     |                                 |
| [16MHz 3225 SMD Crystal](https://lcsc.com/product-detail/Crystals_Seiko-Epson-X1E000021061300_C255909.html)                                            |                                                                                                                                                                                     | 1      |                                 |
| [PRTR5V0U2X](https://lcsc.com/product-detail/Diodes-ESD_Nexperia-PRTR5V0U2X-215_C12333.html)                                                           | SOT143B                                                                                                                                                                             |        | For ESD protection              |
| [SKQG push button switch](https://lcsc.com/product-detail/Tactile-Switches_ALPSALPINE-SKQGAFE010_C202424.html)                                         |                                                                                                                                                                                     | 1      | For reset circuit               |
| 0608/2012 SMD Resistor                                                                                                                                 | [10kΩ](https://lcsc.com/product-detail/Chip-Resistor-Surface-Mount_Viking-Tech-AR05BTCW1002_C316200.html)                                                                           | 3      | For MCU HWB and TRRS jack (i2c) |
|                                                                                                                                                        | [500Ω](https://lcsc.com/product-detail/Chip-Resistor-Surface-Mount_Viking-Tech-ARG05BTC5000_C2828711.html)                                                                          | 1      | For keyboard LED                |
|                                                                                                                                                        | [5.1kΩ](https://lcsc.com/product-detail/Chip-Resistor-Surface-Mount_Viking-Tech-AR05DTCW5101_C319564.html)                                                                          | 2      | For USB-C CC                    |
|                                                                                                                                                        | [22Ω](https://lcsc.com/product-detail/Chip-Resistor-Surface-Mount_Viking-Tech-ARG05BTC0220_C309084.html)                                                                            | 2      | For USB-C data                  |
|                                                                                                                                                        | [330Ω](https://lcsc.com/product-detail/Chip-Resistor-Surface-Mount_Viking-Tech-ARG05BTC3300_C2984456.html)                                                                          | 1      | For reset circuit               |
| 1206/3212 SMD Fuse                                                                                                                                     | [500mA](https://lcsc.com/product-detail/PTC-Resettable-Fuses_TECHFUSE-nSMD025-24V_C70069.html)                                                                                      | 1      |                                 |
| Diodes                                                                                                                                                 | [1N4148](https://lcsc.com/product-detail/Switching-Diode_MCC-Micro-Commercial-Components-1N4148W-TP_C77978.html) or SMD                                                             | 35     |                                 |
| 0805 SMD Capacitors                                                                                                                                    | [22 pF](https://lcsc.com/product-detail/Multilayer-Ceramic-Capacitors-MLCC-SMD-SMT_Samsung-Electro-Mechanics-CL21C220JCANNNC_C165459.html)                                          | 2      | For crystal                     |
|                                                                                                                                                        | [1 uF](https://lcsc.com/product-detail/Multilayer-Ceramic-Capacitors-MLCC-SMD-SMT_Samsung-Electro-Mechanics_CL21B105KAFNNNE_Samsung-Electro-Mechanics-CL21B105KAFNNNE_C116352.html) | 1      | For MCU UCAP                    |
|                                                                                                                                                        | [10 uF](https://lcsc.com/product-detail/Multilayer-Ceramic-Capacitors-MLCC-SMD-SMT_SAMSUNG_CL21B106KOQNNNE_10uF-106-10-16V_C95841.html)                                             | 1      | For decoupling                  |
|                                                                                                                                                        | [0.1 uF](https://lcsc.com/product-detail/Multilayer-Ceramic-Capacitors-MLCC-SMD-SMT_SAMSUNG_CL21B104JBCNNNC_100nF-104-5-50V_C62912.html)                                            | 4      | For decoupling                  |

## Board details

Fabrication gerber files are in `./PCB/gerber` directory.

103.188 mm H x 168.275 mm W <br />
2 layers <br />
Unleaded HASL or ENIG <br />
1.6mm thick <br />
white on black

## Assembly instructions

![v3pcbfront.png](./assets/v3pcbfront.png)

![v3pcbback.png](./assets/v3pcbback.png)

The board is designed to be reversible. You can flip the PCB to the other side to serve as the other half.

The parts that are mountable on both sides of the PCB are the type C port, the TRRS jack, the reset button and the key matrix (switch, LED, diode).

The side for mounting type C port and TRRS jack is up to your will. The reset button should always face up for ease of access. The LEDs for keyboard are reverse mounted. Key diodes should be on the underside.

As one side would have its electrionic components mostly facing down, you should lift the split halves up to avoid shorting. If you have leftover boards from ordering in batch amounts, it is possible to use them as bottom plates using screws and standoffs.

## Build instructions

By default the keyboard is set to use EEPROM handedness check, this means that
for the first time for both halves the following commands need to be used:

```bash
make 5x07:default:dfu-split-left
make 5x07:default:dfu-split-right
```

afterwards the end part can be dropped when flashing again.

For v3 there is no VBUS detection, so USB activity detection must be used for split master detection if you do not want to hardcode the master half.

## CAUTIONS

I couldn't for the life of me figure out how to stably enable the per key RGB, so use at your own risk.

Some problems that I encountered were:
* RHS board (using EEPROM flags) could have RGB lights on in QMK, but then it disconnects if the mode switches from the static gradient to static solid color.
* RHS board can change modes between different static gradients if its hue/saturation/value are turned down first.
* LHS board disconnects from computer immediately after connection when RGB is enabled. If the USB is connected to RHS board and LHS is connected to RHS via i2c, it would drag both halves down with the disconnection. After disconnection, the RGB lights start to flicker.
* RHS board would also display random disconnection behavior if the hsv are changed too fast.