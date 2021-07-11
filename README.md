Reference material: 

Based On: https://github.com/Khaled-Magdy-DeepBlue/STM32_Course_DeepBlue/tree/master/ECUAL
Website: https://deepbluembedded.com/embedded-systems/embedded-tutorials/stm32-arm/page/6/

Support Link: https://docs.platformio.org/en/latest/platforms/ststm32.html#tutorials

If STM32 is not getting programmed or bricked: 
I used ST-Link v2 and ST-Link Utility. In setting, I set "Connect under reset" and SWD interface (I'm not sure about frequency). 
Then I press the reset button on my board and clicked "Target" -> "Erase chip" and just after clicking I released the button - It erased the chip so I can now reprogram my MCU.
Requires: ST-Link Utility Windows