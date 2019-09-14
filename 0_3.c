/*
 * New_lab2_demo2.c
 *
 * Created: 9/13/2019 2:54:06 PM
 * Author : Regina
 */ 

#include <avr/io.h>
#include<avr/interrupt.h>

//int extraTime = 0;
void timer0_init(){
	//set up timer with no prescaling
	TCCR0B |= (1<<CS00);
	//INIT COUNTER
	TCNT0 = 0;
}
int main(void)
{	
	
	DDRD |= 1<<PORTD6;
	timer0_init();
	//PORTD|= 1<<PORTD6;
    /* Replace with your application code */
    while (1) 
    {
		TCNT0++;
		if(TCNT0 >=191){
			PORTD ^=(1<<PORTD6);	
			TCNT0 = 0;
		}
		
    }
}



