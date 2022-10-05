/***********************************************************************
 * 
 * Blink a LED in Arduino-style and use function from the delay library.
 * ATmega328P (Arduino Uno), 16 MHz, PlatformIO
 *
 * Copyright (c) 2022 Tomas Fryza
 * Dept. of Radio Electronics, Brno University of Technology, Czechia
 * This work is licensed under the terms of the MIT license.
 * 
 **********************************************************************/


/* Defines -----------------------------------------------------------*/
#define LED_GREEN PB5   // PB5 is AVR pin where green on-board LED 
#define LED_RED PB0
                        // is connected
#define SHORT_DELAY 250 // Delay in milliseconds
#define LONG_DELAY 750
#ifndef F_CPU
# define F_CPU 16000000 // CPU frequency in Hz required for delay funcs
#endif

/* Includes ----------------------------------------------------------*/
#include <avr/io.h>     // AVR device-specific IO definitions
#include <util/delay.h> // Functions for busy-wait delay loops


// -----
// This part is needed to use Arduino functions but also physical pin
// names. We are using Arduino-style just to simplify the first lab.
#include "Arduino.h"
#define PB5 13          // In Arduino world, PB5 is called "13"
#define PB0 8 
// -----


/* Function definitions ----------------------------------------------*/
/**********************************************************************
 * Function: Main function where the program execution begins
 * Purpose:  Toggle one LED and use delay library.
 * Returns:  none
 **********************************************************************/
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