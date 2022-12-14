# Lab 5: ŠIMON BUCHTA

### Analog-to-Digital Conversion

1. Complete table with voltage divider, calculated, and measured ADC values for all five push buttons.

   | **Push button** | **PC0[A0] voltage** | **ADC value (calculated)** | **ADC value (measured)** | **ADC value (measured, hex)** |
   | :-: | :-: | :-: | :-: | :-: |
   | Right  | 0&nbsp;V | 0   | 0 | 0 |
   | Up     | 0.495&nbsp;V | 101 | 99 | 63 |
   | Down   | 1.203&nbsp;V | 246 | 255 | ff |
   | Left   | 1.97&nbsp;V | 403 | 408 | 198 |
   | Select | 3.18&nbsp;V | 651 | 638 | 27e |
   | none   | 5&nbsp;V | 1023 | 1023 | 3ff |

### Temperature meter

Consider an application for temperature measurement. Use analog temperature sensor [TC1046](http://ww1.microchip.com/downloads/en/DeviceDoc/21496C.pdf), LCD, and a LED. Every 30 seconds, the temperature is measured and the value is displayed on LCD screen. When the temperature is too high, the LED will turn on.

2. Draw a schematic of temperature meter. The image can be drawn on a computer or by hand. Always name all components and their values.

   ![cv5de2 schema termometer](https://user-images.githubusercontent.com/99410540/199343296-ac286c11-250b-4ec2-b44f-8eb9c06137a3.png)


3. Draw two flowcharts for interrupt handler `TIMER1_OVF_vect` (which overflows every 1&nbsp;sec) and `ADC_vect`. The image can be drawn on a computer or by hand. Use clear descriptions of the individual steps of the algorithms.

 ![cv5de2 adc vect](https://user-images.githubusercontent.com/99410540/199343426-4e86f281-a45e-4ab3-a5e2-6430b9a3446f.png)

![cv5de2 timer1 overflow vect](https://user-images.githubusercontent.com/99410540/199343376-e9bed0a9-ffcd-4cf1-a95e-aeb30561f90d.png)
