# Lab 1: YOUR_FIRSTNAME LASTNAME

### Morse code

1. Listing of C code which repeats one "dot" and one "comma" (BTW, in Morse code it is letter `A`) on a LED. Always use syntax highlighting, meaningful comments, and follow C guidelines:

```c
int main(void)
{
    uint8_t led_value = LOW;  // Local variable to keep LED status
    uint8_t led_value1 = LOW;

    // Set pin where on-board LED is connected as output
    pinMode(LED_RED,OUTPUT );
    pinMode(LED_GREEN,OUTPUT );

    // Infinite loop
    while (1)
    {
      led_value = LOW;
      digitalWrite(LED_RED, led_value);
      _delay_ms(SHORT_DELAY);
      // Pause several milliseconds
      led_value = HIGH;
      digitalWrite(LED_RED, led_value);
      _delay_ms(SHORT_DELAY);
      
      led_value = LOW;
      digitalWrite(LED_RED, led_value);
      _delay_ms(LONG_DELAY);

      led_value = HIGH;
      digitalWrite(LED_RED, led_value);
      _delay_ms(LONG_DELAY);

     
    }

    // Will never reach this
    return 0;
}
```

2. Scheme of Morse code application, i.e. connection of AVR device, LED, resistor, and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

   ![your figure]()
