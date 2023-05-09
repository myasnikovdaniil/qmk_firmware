# QMK-based firmware for Apple M0110A keyboard

* Keyboard Maintainer: [DmNosachev](https://github.com/DmNosachev)
* Hardware Supported: Apple M0110A (Mitsumi version), Blue/Black Pill STM32F103 MCU 
oard. Alternatevely you can use any MCU which is supported by QMK and
has 19 or more IO pins.

Make example for this keyboard (after setting up your build environment):

    make handwired/m0110a:default
    
Flashing example for this keyboard:

    make handwired/m0110a:default:flash


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools)
and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide)
for more information. Brand new to QMK? Start with our
[Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Matrix
There are also PCBs for Alps and SMK switches. These PCBs may have same number of rows and columns, but different layout, i.e. their matrix may differ from Mitsumi PCB.



## Bootloader
Burn [STM32duino bootloader](https://github.com/rogerclarkmelbourne/STM32duino-bootloader)
to Blue Pill board.

There are several ways to get into the bootloader:
* STM32duino bootloader waits for 3 seconds in DFU mode before jumping to application.
You just have to start the flashing process, then connect the USB.
* This firmware is configured with [bootmagic feature](https://docs.qmk.fm/#/feature_bootmagic).
Hold the key in upper left corner (*tilde*) down when plugging the keyboard in to trigger the bootloader.

## Troubleshooting
There is *debug* layout which has mapping for every matrix position and
prints column and raw numbers to console (hid_listen or QMK toolbox).
