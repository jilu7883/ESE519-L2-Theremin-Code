/*
 * lab2_demo1.c
 *
 * Created: 9/13/2019 1:39:54 PM
 * Author : Regina
 */ 

#include <avr/io.h>


int main(void)
{
	
	//set output port and input port, 5 for output, 0 for input
	DDRB = 0b00010000;
	
	
	PORTB = 0b00000001;
	
	
    /* Replace with your application code */
    while (1) 
    {
		if(!(PINB & 0x01))
		{
			PORTB |= (1<<5);//put one to fifth location, make fifth location is one. Make it on. Use "|" means didn't want to change another location's on or off.  
		}
		else
		{
			PORTB &= ~(1<<5);//put zero to fifth location, 
		}
    }
}

