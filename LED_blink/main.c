/*
 * main.c
 *
 *  Created on: Mar 7, 2023
 *      Author: student
 */


# include <avr/io.h>
# include <stdint.h>
# include <util/delay.h>

void ledBlink ( int16_t high_time , int16_t low_time )
{
PORTB |= 1 << 5; // LED ON
_delay_ms ( high_time ); // Pauza 1s
PORTB &= ~(1 << 5); // LED OFF
_delay_ms ( low_time ); // Pauza 1s
}

int16_t main ()
{
	int16_t high_time = 500;
	int16_t low_time = 800;

	DDRB |= 1 << 5; // PB5 je izlaz

	while (1){

		ledBlink(high_time, low_time );
	}
	;
	return 0;
}
