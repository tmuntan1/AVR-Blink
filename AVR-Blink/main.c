/*
* AVR-Blink.c
*
* Created: 03-Oct-15 8:32:53 AM
* Author : Thomas Muntaner
*/
#define F_CPU 1000000UL         // sets the frequency of the clock for delay

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB |= (1 << PB0);         // Turn PB0 to the output direction
    
    while (1)
    {
        PORTB = (1 << PB0);     // Set PB0 to high
        _delay_ms(1000);        // Delay for one second
        PORTB = ~(1 << PB0);    // Set PB0 to low
        _delay_ms(1000);        // Delay for one second
    }
    
    return 0;                   // Need to return a value for GCC compile, will never be reached
}

