# Unofficial Zero G Knomi firmware

## Initial release
New Zero G Animated logo with an animated Emoji based theme to replace the default Knomi faces animations. This releace includes a new animation for input shaping triggered by the SHAPER_CALIBRATE gcode.
#### Video demo of the animations
[![Unofficial Zero G Knomi Firmware](https://img.youtube.com/vi/QmbNUho1ItI/0.jpg)](https://www.youtube.com/watch?v=QmbNUho1ItI)

## KNOMI1
* Zero G & Emoji theme firmware : [here](https://github.com/JonathanBourassa/Unofficial-ZeroG-KNOMI/tree/master/KNOMI1/Firmware/Emoji%20Theme)
* Online manual & customize UI tutorials ： [here](https://bigtreetech.github.io/docs/KNOMI.html#)

## KNOMI2
* Zero G & Emoji theme firmware : [here](https://github.com/JonathanBourassa/Unofficial-ZeroG-KNOMI/tree/master/KNOMI2/Firmware/Emoji%20Theme)
* Online manual : [here](https://bigtreetech.github.io/docs/KNOMI2.html#)

## Klipper config

[KNOMI.cfg](./KNOMI.cfg) is the klipper config of the [latest version firmware](https://github.com/JonathanBourassa/Unofficial-ZeroG-KNOMI/tree/firmware)


## Firmware source code
[Here](https://github.com/JonathanBourassa/Unofficial-ZeroG-KNOMI/tree/firmware) is the Zero G firmware source code for both KNOMI1 and KNOMI2.

## Firmware update
### OTA
* Download the pre compiled firmware from GitHub([KNOMI1](./KNOMI1/Firmware/Emoji%20Theme/firmware.bin) and [KNOMI2](./KNOMI2/Firmware/Emoji%20Theme/firmware.bin)) or build your own firmware
* Enter KNOMI's IP or hostname (default is `knomi.local`) in the browser of a device with the same LAN as knomi, and then click `Update FW`<br/>
<img src=Images/ota_1.png width="400" /><br/>
* Select the firmware file just downloaded to start updating. After the update is complete, KNOMI will automatically restart and run the new firmware.<br/>
<img src=Images/ota_2.png width="400" /><br/>

### Using `Flash Download Tools` from Espressif
This step is used when KNOMI1 does not have OTA feature, or KNOMI cannot start and run OTA feature normally
* Refer to the steps [here](https://bigtreetech.github.io/docs/KNOMI.html#update-firmware), but use firmware files from this repository.([KNOMI1](./KNOMI1/Firmware/) and [KNOMI2](./KNOMI2/Firmware/))