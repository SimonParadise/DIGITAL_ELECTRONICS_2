# Lab 8: ŠIMON BUCHTA

### Instruction set

1. Complete the conversion table with selected instructions:

   | **Instruction** | **Binary opcode** | **Hex opcode** | **Compiler Hex opcode** |
   | :-- | :-: | :-: | :-: |
   | `add r24, r0` | 0000_1101_1000_0000 | 0D 80 | 80 0D |
   | `com r26` | 1001_0101_1010_0000 | 95 A0 | A0 95 |
   | `eor r26, r27` | 0010_0111_1010_1011 | 27 AB | AB 27 |
   | `mul r22, r20` | 1001_1111_0110_0100 | 9F 64 | 64 9F |
   | `ret` | `1001_0101_0000_1000` | `95 08` | 08 95 |

### 4-bit LFSR

2. Complete table with 4-bit LFSR values for different Tap positions:

   | **Tap position** | **Generated values** | **Length** |
   | :-: | :-- | :-: |
   | 4, 3 | 0, 1, 3, 7, 14, 13, 11, 6, 12, 9, 2, 5, 10, 4, 8 | 15 |
   | 4, 2 | 0, 1, 3, 6, 12, 8 | 6 |
   | 4, 1 | 	0, 1, 2, 5, 10, 4, 9, 3, 6, 13, 11, 7, 14, 12, 8 | 15 |

### Variable number of short pulses

3. Draw a flowchart of function `void burst_c(uint8_t number)` which generates a variable number of short pulses at output pin. Let the pulse width be the shortest one. The image can be drawn on a computer or by hand. Use clear descriptions of the individual steps of the algorithms.

   ![DE2CV9 1](https://user-images.githubusercontent.com/99410540/203429195-1cf1dc6e-e291-465e-a147-27df7b419fff.png)
