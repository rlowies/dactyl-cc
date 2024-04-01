This Repo is a Fork of [mjohns dactyl cc build](https://github.com/mjohns/dactyl-cc) that is similar to a Kinesis Advantage 2.

I have modified the original dactyl-cc to now contain the Fn keys and Modifier columns. This version resembles the Kinesis Advantage 360.


## Print

The [print](https://imgur.com/9Io86a6.png) turned out nicely after spending some time tuning my printer. I found that decreasing the density of the supports made it easier to remove.
I also chose to use hotglue on the keys just in case, but they fit pretty snug without it.

## Wiring

There are many examples out there that explain how this works. [tuxtower](https://tuxtower.net/blog/dactylmanuform/) is a good resource.
I also found this post from [geekhack](https://geekhack.org/index.php?topic=115397.0) very helpful when wiring the thumb clusters.

![image](https://imgur.com/aoQg44I.png)

## Controller 

I chose to go with the NRF52840, it's really a chinese knockoff of the nice!nano and can be found on aliexpress. It is much cheaper but draws some more power from the batteries when idle than the nice!nano would. The power consumption is explained in [this wiki](https://github.com/joric/nrfmicro/wiki/Alternatives#supermini-nrf52840) and there are solutions +alternatives if that is a concern for you.
To combat this, I have installed 3400mah batteries for each side. This is a massive size for a keyboard but it adds a lot of weight to the keyboard that I find necessary. I also added a power switch that will cut power to the batteries when not in use.

## Firmware
I chose to flash the controllers with ZMK since it supports wireless pairing. It is very simple to modify the layout using [Keymap Editor](https://nickcoutsos.github.io/keymap-editor/)
Here is my repo including the layout meant for a keyboard similar to the Advantage 360
https://github.com/rlowies/zmk-config-dactyl-360

## Results

This verson of the dactyl is very similar to the actual Advantage 360, I have no issues swapping between the two. Given that my goal was to have similar typing experiences on my other computers without having to move the advantage 360 this was a huge success!

![image](https://imgur.com/0g1YPs4.png)
![image](https://imgur.com/zdiNVeq.png)
