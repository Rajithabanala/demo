/*
 * buttonled.c
 *
 * Created: 07-06-2019 10:33:41
 * Author : ganga
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>
int main(void)

{
	DDRC|=(1<<PC0);
	DDRD&=~(1<<PD0);
    /* Replace with your application code */
    while (1) 
    {
		if((PIND&(1<<PD0))==0)
		{
			PORTC|=(1<<PC0);
			_delay_ms(3000);
			PORTC&=~(1<<PC0);
			_delay_ms(3000);
		}
    }
}
