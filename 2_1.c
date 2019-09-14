/*
 * New_lab2_demo2.c
 *
 * Created: 9/13/2019 2:54:06 PM
 * Author : Regina
 */ 

#include <avr/io.h>
#include<avr/interrupt.h>

int extraTime = 0;
int main(void)
{	
	TCCR0A = (1<<WGM01);//SET CTC
	OCR0A = 195;
	TIMSK0 = (1<<OCIE0A);
	
	sei();
	TCCR0B =(1<<CS02)|(1<<CS00);
	DDRD = 1<<PORTD6;
	//PORTD|= 1<<PORTD6;
    /* Replace with your application code */
    while (1) 
    {
		
    }
}
ISR(TIMER0_COMPA_vect){
	extraTime++;
	if(extraTime>1000)//1s{
	{
		PORTD ^=(1<<PORTD6);	
	}	
	
	
}

