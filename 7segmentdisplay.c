/*
 * _7segmentdisplay.c
 *
 * Created: 2/11/2013 6:37:20 PM
 *  Author: redwan islam arnob
 */ 

#include <avr/io.h>
#include <util/delay.h>

void number_disp(int i)
{
	switch (i)
	{
	case 1:
	PORTA=0b00001010;
	PORTB=0b00001010;
	PORTC=0;
		break;
	case 2:
	PORTA=0b00001011;
	PORTB=0b00010101;
	PORTC=1;
		break;
	case 3:
	PORTA=0b00001011;
	PORTB=0b00001011;
	PORTC=1;
		break;
	case 4:
	PORTA=0b00011110;
	PORTB=0b00001010;
	PORTC=1;
		break;
	case 5:
	PORTA=0b00010101;
	PORTB=0b00001011;
	PORTC=1;
		break;
	case 6:
	PORTA=0b00010101;
	PORTB=0b00011111;
	PORTC=1;
		break;
	case 7:
	PORTA=0b00001011;
	PORTB=0b00001010;
	PORTC=0;
		break;
	case 8:
	PORTA=0b00011111;
	PORTB=0b00011111;
	PORTC=1;
		break;
	case 9:
	PORTA=0b00011111;
	PORTB=0b00001011;
	PORTC=1;
		break;
	case 0:
	PORTA=0b00011111;
	PORTB=0b00011111;
	PORTC=0;
		break; 	
	}
}
int main(void)
{
	DDRA=255;
	DDRB=255;
	DDRC=255;
	int i;
    while(1)
    {
         for (i=0;i<=9;i++)
         {
			 number_disp(i);
			 _delay_ms(1000);
         }
    }
	return 0;
}