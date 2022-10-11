
Lab 2: ŠIMON BUCHTA

### GPIO control registers

1. Complete the table for DDRB and PORTB control register values.

   | **DDRB** | **PORTB** | **Direction** | **Internal pull-up resistor** | **Description** |
   | :-: | :-: | :-: | :-: | :-- |
   | 0 | 0 | input | no | Tri-state, high-impedance |
   | 0 | 1 | input | yes | pxn will source current if ext. pulled low |
   | 1 | 0 | output | no | output low(sink) |
   | 1 | 1 | output | no | outpiut high(source) |

### GPIO library

2. Complete the table with code sizes from three versions of the blink application.

   | **Version** | **Size [B]** |
   | :-- | :-: |
   | Arduino-style     | 480 |
   | Registers         | 186 |
   | Library functions | 182 |

### Traffic light

3. Scheme of traffic light application with one red/yellow/green light for cars, one red/green light for pedestrians, and one push button. Connect AVR device, LEDs, resistors, push button (for pedestrians), and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

   [290242621_577699890782041_2887593386779895771_n](https://user-images.githubusercontent.com/99410540/195186068-78a0d3ab-2532-4f46-9961-1f7a7a61d775.jpg)

