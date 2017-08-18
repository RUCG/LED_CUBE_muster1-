#include <stdlib.h>
#include <avr/io.h>
#include <avr/interrupt.h>


#define F_CPU 8000000UL
#include <util/delay.h>


void led( short y, short x, short z)
{
	DDRA = 0x00;
	DDRB = 0x00;
	DDRC = 0x00;
	DDRD = 0x00;

	switch(y)
	{
		case 1: switch(x)
				{
					case 1: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRD |= (1<<PD3);	
			
										PORTA |= (1<<PD0);
										PORTD &= ~(1<<PD3);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRD |= (1<<PD3);	
			
										PORTA |= (1<<PD1);
										PORTD &= ~(1<<PD3);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRD |= (1<<PD3);	
			
										PORTA |= (1<<PD2);
										PORTD &= ~(1<<PD3);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRD |= (1<<PD3);	
			
										PORTA |= (1<<PD3);
										PORTD &= ~(1<<PD3);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRD |= (1<<PD3);	
			
										PORTA |= (1<<PD4);
										PORTD &= ~(1<<PD3);
										break;
							}break;
					case 2: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRD |= (1<<PD4);	
			
										PORTA |= (1<<PD0);
										PORTD &= ~(1<<PD4);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRD |= (1<<PD4);	
			
										PORTA |= (1<<PD1);
										PORTD &= ~(1<<PD4);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRD |= (1<<PD4);	
			
										PORTA |= (1<<PD2);
										PORTD &= ~(1<<PD4);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRD |= (1<<PD4);	
			
										PORTA |= (1<<PD3);
										PORTD &= ~(1<<PD4);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRD |= (1<<PD4);	
			
										PORTA |= (1<<PD4);
										PORTD &= ~(1<<PD4);
										break;
							}break;
					case 3: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRD |= (1<<PD5);	
			
										PORTA |= (1<<PD0);
										PORTD &= ~(1<<PD5);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRD |= (1<<PD5);	
			
										PORTA |= (1<<PD1);
										PORTD &= ~(1<<PD5);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRD |= (1<<PD5);	
			
										PORTA |= (1<<PD2);
										PORTD &= ~(1<<PD5);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRD |= (1<<PD5);	
			
										PORTA |= (1<<PD3);
										PORTD &= ~(1<<PD5);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRD |= (1<<PD5);	
			
										PORTA |= (1<<PD4);
										PORTD &= ~(1<<PD5);
										break;
							}break;
					case 4: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRD |= (1<<PD6);	
			
										PORTA |= (1<<PD0);
										PORTD &= ~(1<<PD6);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRD |= (1<<PD6);	
			
										PORTA |= (1<<PD1);
										PORTD &= ~(1<<PD6);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRD |= (1<<PD6);	
			
										PORTA |= (1<<PD2);
										PORTD &= ~(1<<PD6);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRD |= (1<<PD6);	
			
										PORTA |= (1<<PD3);
										PORTD &= ~(1<<PD6);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRD |= (1<<PD6);	
			
										PORTA |= (1<<PD4);
										PORTD &= ~(1<<PD6);
										break;
							}break;	
					case 5: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRD |= (1<<PD7);	
			
										PORTA |= (1<<PD0);
										PORTD &= ~(1<<PD7);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRD |= (1<<PD7);	
			
										PORTA |= (1<<PD1);
										PORTD &= ~(1<<PD7);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRD |= (1<<PD7);	
			
										PORTA |= (1<<PD2);
										PORTD &= ~(1<<PD7);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRD |= (1<<PD7);	
			
										PORTA |= (1<<PD3);
										PORTD &= ~(1<<PD7);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRD |= (1<<PD7);	
			
										PORTA |= (1<<PD4);
										PORTD &= ~(1<<PD7);
										break;
							}break;
				}break;
				
		case 2: switch(x)
				{
					case 1: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRD |= (1<<PD3);	
			
										PORTA &= ~(1<<PD0);
										PORTD |= (1<<PD3);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRD |= (1<<PD3);	
			
										PORTA &= ~(1<<PD1);
										PORTD |= (1<<PD3);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRD |= (1<<PD3);	
			
										PORTA &= ~(1<<PD2);
										PORTD |= (1<<PD3);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRD |= (1<<PD3);	
			
										PORTA &= ~(1<<PD3);
										PORTD |= (1<<PD3);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRD |= (1<<PD3);	
			
										PORTA &= ~(1<<PD4);
										PORTD |= (1<<PD3);
										break;
							}break;
					case 2: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRD |= (1<<PD4);	
			
										PORTA &= ~(1<<PD0);
										PORTD |= (1<<PD4);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRD |= (1<<PD4);	
			
										PORTA &= ~(1<<PD1);
										PORTD |= (1<<PD4);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRD |= (1<<PD4);	
			
										PORTA &= ~(1<<PD2);
										PORTD |= (1<<PD4);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRD |= (1<<PD4);	
			
										PORTA &= ~(1<<PD3);
										PORTD |= (1<<PD4);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRD |= (1<<PD4);	
			
										PORTA &= ~(1<<PD4);
										PORTD |= (1<<PD4);
										break;
							}break;
					case 3: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRD |= (1<<PD5);	
			
										PORTA &= ~(1<<PD0);
										PORTD |= (1<<PD5);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRD |= (1<<PD5);	
			
										PORTA &= ~(1<<PD1);
										PORTD |= (1<<PD5);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRD |= (1<<PD5);	
			
										PORTA &= ~(1<<PD2);
										PORTD |= (1<<PD5);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRD |= (1<<PD5);	
			
										PORTA &= ~(1<<PD3);
										PORTD |= (1<<PD5);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRD |= (1<<PD5);	
			
										PORTA &= ~(1<<PD4);
										PORTD |= (1<<PD5);
										break;
							}break;
					case 4: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRD |= (1<<PD6);	
			
										PORTA &= ~(1<<PD0);
										PORTD |= (1<<PD6);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRD |= (1<<PD6);	
			
										PORTA &= ~(1<<PD1);
										PORTD |= (1<<PD6);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRD |= (1<<PD6);	
			
										PORTA &= ~(1<<PD2);
										PORTD |= (1<<PD6);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRD |= (1<<PD6);	
			
										PORTA &= ~(1<<PD3);
										PORTD |= (1<<PD6);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRD |= (1<<PD6);	
			
										PORTA &= ~(1<<PD4);
										PORTD |= (1<<PD6);
										break;
							}break;
					case 5: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRD |= (1<<PD7);	
			
										PORTA &= ~(1<<PD0);
										PORTD |= (1<<PD7);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRD |= (1<<PD7);	
			
										PORTA &= ~(1<<PD1);
										PORTD |= (1<<PD7);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRD |= (1<<PD7);	
			
										PORTA &= ~(1<<PD2);
										PORTD |= (1<<PD7);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRD |= (1<<PD7);	
			
										PORTA &= ~(1<<PD3);
										PORTD |= (1<<PD7);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRD |= (1<<PD7);	
			
										PORTA &= ~(1<<PD4);
										PORTD |= (1<<PD7);
										break;
							}break;
				}break;
		case 3: switch(x)
				{
					case 1: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRC |= (1<<PD7);	
			
										PORTA |= (1<<PD0);
										PORTC &= ~(1<<PD7);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRC |= (1<<PD7);	
			
										PORTA |= (1<<PD1);
										PORTC &= ~(1<<PD7);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRC |= (1<<PD7);	
			
										PORTA |= (1<<PD2);
										PORTC &= ~(1<<PD7);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRC |= (1<<PD7);	
			
										PORTA |= (1<<PD3);
										PORTC &= ~(1<<PD7);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRC |= (1<<PD7);	
			
										PORTA |= (1<<PD4);
										PORTC &= ~(1<<PD7);
										break;
							}break;
					case 2: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRC |= (1<<PD6);	
			
										PORTA |= (1<<PD0);
										PORTC &= ~(1<<PD6);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRC |= (1<<PD6);	
			
										PORTA |= (1<<PD1);
										PORTC &= ~(1<<PD6);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRC |= (1<<PD6);	
			
										PORTA |= (1<<PD2);
										PORTC &= ~(1<<PD6);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRC |= (1<<PD6);	
			
										PORTA |= (1<<PD3);
										PORTC &= ~(1<<PD6);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRC |= (1<<PD6);	
			
										PORTA |= (1<<PD4);
										PORTC &= ~(1<<PD6);
										break;
							}break;
					case 3: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRC |= (1<<PD3);	
			
										PORTA |= (1<<PD0);
										PORTC &= ~(1<<PD3);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRC |= (1<<PD3);	
			
										PORTA |= (1<<PD1);
										PORTC &= ~(1<<PD3);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRC |= (1<<PD3);	
			
										PORTA |= (1<<PD2);
										PORTC &= ~(1<<PD3);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRC |= (1<<PD3);	
			
										PORTA |= (1<<PD3);
										PORTC &= ~(1<<PD3);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRC |= (1<<PD3);	
			
										PORTA |= (1<<PD4);
										PORTC &= ~(1<<PD3);
										break;
							}break;
					case 4: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRC |= (1<<PD4);	
			
										PORTA |= (1<<PD0);
										PORTC &= ~(1<<PD4);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRC |= (1<<PD4);	
			
										PORTA |= (1<<PD1);
										PORTC &= ~(1<<PD4);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRC |= (1<<PD4);	
			
										PORTA |= (1<<PD2);
										PORTC &= ~(1<<PD4);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRC |= (1<<PD4);	
			
										PORTA |= (1<<PD3);
										PORTC &= ~(1<<PD4);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRC |= (1<<PD4);	
			
										PORTA |= (1<<PD4);
										PORTC &= ~(1<<PD4);
										break;
							}break;	
					case 5: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRC |= (1<<PD5);	
			
										PORTA |= (1<<PD0);
										PORTC &= ~(1<<PD5);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRC |= (1<<PD5);	
			
										PORTA |= (1<<PD1);
										PORTC &= ~(1<<PD5);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRC |= (1<<PD5);	
			
										PORTA |= (1<<PD2);
										PORTC &= ~(1<<PD5);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRC |= (1<<PD5);	
			
										PORTA |= (1<<PD3);
										PORTC &= ~(1<<PD5);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRC |= (1<<PD5);	
			
										PORTA |= (1<<PD4);
										PORTC &= ~(1<<PD5);
										break;
							}break;
				}break;
		case 4: switch(x)
				{
				
					case 1: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRC |= (1<<PD7);	
			
										PORTA &= ~(1<<PD0);
										PORTC |= (1<<PD7);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRC |= (1<<PD7);	
			
										PORTA &= ~(1<<PD1);
										PORTC |= (1<<PD7);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRC |= (1<<PD7);	
			
										PORTA &= ~(1<<PD2);
										PORTC |= (1<<PD7);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRC |= (1<<PD7);	
			
										PORTA &= ~(1<<PD3);
										PORTC |= (1<<PD7);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRC |= (1<<PD7);	
			
										PORTA &= ~(1<<PD4);
										PORTC |= (1<<PD7);
										break;
							}break;
					case 2: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRC |= (1<<PD6);	
			
										PORTA &= ~(1<<PD0);
										PORTC |= (1<<PD6);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRC |= (1<<PD6);	
			
										PORTA &= ~(1<<PD1);
										PORTC |= (1<<PD6);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRC |= (1<<PD6);	
			
										PORTA &= ~(1<<PD2);
										PORTC |= (1<<PD6);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRC |= (1<<PD6);	
			
										PORTA &= ~(1<<PD3);
										PORTC |= (1<<PD6);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRC |= (1<<PD6);	
			
										PORTA &= ~(1<<PD4);
										PORTC |= (1<<PD6);
										break;
							}break;
					case 3: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRC |= (1<<PD3);	
			
										PORTA &= ~(1<<PD0);
										PORTC |= (1<<PD3);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRC |= (1<<PD3);	
			
										PORTA &= ~(1<<PD1);
										PORTC |= (1<<PD3);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRC |= (1<<PD3);	
			
										PORTA &= ~(1<<PD2);
										PORTC |= (1<<PD3);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRC |= (1<<PD3);	
			
										PORTA &= ~(1<<PD3);
										PORTC |= (1<<PD3);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRC |= (1<<PD3);	
			
										PORTA &= ~(1<<PD4);
										PORTC |= (1<<PD3);
										break;
							}break;
					case 4: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRC |= (1<<PD4);	
			
										PORTA &= ~(1<<PD0);
										PORTC |= (1<<PD4);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRC |= (1<<PD4);	
			
										PORTA &= ~(1<<PD1);
										PORTC |= (1<<PD4);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRC |= (1<<PD4);	
			
										PORTA &= ~(1<<PD2);
										PORTC |= (1<<PD4);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRC |= (1<<PD4);	
			
										PORTA &= ~(1<<PD3);
										PORTC |= (1<<PD4);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRC |= (1<<PD4);	
			
										PORTA &= ~(1<<PD4);
										PORTC |= (1<<PD4);
										break;
							}break;
					case 5: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRC |= (1<<PD5);	
			
										PORTA &= ~(1<<PD0);
										PORTC |= (1<<PD5);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRC |= (1<<PD5);	
			
										PORTA &= ~(1<<PD1);
										PORTC |= (1<<PD5);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRC |= (1<<PD5);	
			
										PORTA &= ~(1<<PD2);
										PORTC |= (1<<PD5);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRC |= (1<<PD5);	
			
										PORTA &= ~(1<<PD3);
										PORTC |= (1<<PD5);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRC |= (1<<PD5);	
			
										PORTA &= ~(1<<PD4);
										PORTC |= (1<<PD5);
										break;
							}break;
				}break;
		case 5: switch(x)
				{
					case 1: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRB |= (1<<PD4);	
			
										PORTA |= (1<<PD0);
										PORTB &= ~(1<<PD4);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRB |= (1<<PD4);	
			
										PORTA |= (1<<PD1);
										PORTB &= ~(1<<PD4);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRB |= (1<<PD4);	
			
										PORTA |= (1<<PD2);
										PORTB &= ~(1<<PD4);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRB |= (1<<PD4);	
			
										PORTA |= (1<<PD3);
										PORTB &= ~(1<<PD4);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRB |= (1<<PD4);	
			
										PORTA |= (1<<PD4);
										PORTB &= ~(1<<PD4);
										break;
							}break;
					case 2: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRB |= (1<<PD3);	
			
										PORTA |= (1<<PD0);
										PORTB &= ~(1<<PD3);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRB |= (1<<PD3);	
			
										PORTA |= (1<<PD1);
										PORTB &= ~(1<<PD3);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRB |= (1<<PD3);	
			
										PORTA |= (1<<PD2);
										PORTB &= ~(1<<PD3);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRB |= (1<<PD3);	
			
										PORTA |= (1<<PD3);
										PORTB &= ~(1<<PD3);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRB |= (1<<PD3);	
			
										PORTA |= (1<<PD4);
										PORTB &= ~(1<<PD3);
										break;
							}break;
					case 3: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRB |= (1<<PD2);	
			
										PORTA |= (1<<PD0);
										PORTB &= ~(1<<PD2);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRB |= (1<<PD2);	
			
										PORTA |= (1<<PD1);
										PORTB &= ~(1<<PD2);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRB |= (1<<PD2);	
			
										PORTA |= (1<<PD2);
										PORTB &= ~(1<<PD2);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRB |= (1<<PD2);	
			
										PORTA |= (1<<PD3);
										PORTB &= ~(1<<PD2);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRB |= (1<<PD2);	
			
										PORTA |= (1<<PD4);
										PORTB &= ~(1<<PD2);
										break;
							}break;
					case 4: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRB |= (1<<PD1);	
			
										PORTA |= (1<<PD0);
										PORTB &= ~(1<<PD1);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRB |= (1<<PD1);	
			
										PORTA |= (1<<PD1);
										PORTB &= ~(1<<PD1);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRB |= (1<<PD1);	
			
										PORTA |= (1<<PD2);
										PORTB &= ~(1<<PD1);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRB |= (1<<PD1);	
			
										PORTA |= (1<<PD3);
										PORTB &= ~(1<<PD1);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRB |= (1<<PD1);	
			
										PORTA |= (1<<PD4);
										PORTB &= ~(1<<PD1);
										break;
							}break;	
					case 5: switch(z)
							{
								case 1: DDRA |= (1<<PD0);
										DDRB |= (1<<PD0);	
			
										PORTA |= (1<<PD0);
										PORTB &= ~(1<<PD0);
										break;
								case 2: DDRA |= (1<<PD1);
										DDRB |= (1<<PD0);	
			
										PORTA |= (1<<PD1);
										PORTB &= ~(1<<PD0);
										break;
								case 3: DDRA |= (1<<PD2);
										DDRB |= (1<<PD0);	
			
										PORTA |= (1<<PD2);
										PORTB &= ~(1<<PD0);
										break;
								case 4: DDRA |= (1<<PD3);
										DDRB |= (1<<PD0);	
			
										PORTA |= (1<<PD3);
										PORTB &= ~(1<<PD0);
										break;
								case 5: DDRA |= (1<<PD4);
										DDRB |= (1<<PD0);	
			
										PORTA |= (1<<PD4);
										PORTB &= ~(1<<PD0);
										break;
							}break;
				}break;
	}
}

void senk( short x, short z)
{

	
	short s = 1;
	
	switch(x)
	{
		case 1:switch(z)
				{
					case 1:	led(1,1,1);
							_delay_ms(s);
							led(2,1,1);
							_delay_ms(s);
							led(3,1,1);
							_delay_ms(s);
							led(4,1,1);
							_delay_ms(s);
							led(5,1,1);
							_delay_ms(s);
							break;		
					case 2: led(1,1,2);
							_delay_ms(s);
							led(2,1,2);
							_delay_ms(s);
							led(3,1,2);
							_delay_ms(s);
							led(4,1,2);
							_delay_ms(s);
							led(5,1,2);
							_delay_ms(s);
							break;
					case 3: led(1,1,3);
							_delay_ms(s);
							led(2,1,3);
							_delay_ms(s);
							led(3,1,3);
							_delay_ms(s);
							led(4,1,3);
							_delay_ms(s);
							led(5,1,3);
							_delay_ms(s);
							break;
					case 4: led(1,1,4);
							_delay_ms(s);
							led(2,1,4);
							_delay_ms(s);
							led(3,1,4);
							_delay_ms(s);
							led(4,1,4);
							_delay_ms(s);
							led(5,1,4);
							_delay_ms(s);
							break;
					case 5:	led(1,1,5);
							_delay_ms(s);
							led(2,1,5);
							_delay_ms(s);
							led(3,1,5);
							_delay_ms(s);
							led(4,1,5);
							_delay_ms(s);
							led(5,1,5);
							_delay_ms(s);
							break;
				}break;
		case 2:switch(z)
				{
					case 1:	led(1,2,1);
							_delay_ms(s);
							led(2,2,1);
							_delay_ms(s);
							led(3,2,1);
							_delay_ms(s);
							led(4,2,1);
							_delay_ms(s);
							led(5,2,1);
							_delay_ms(s);
							break;		
					case 2: led(1,2,2);
							_delay_ms(s);
							led(2,2,2);
							_delay_ms(s);
							led(3,2,2);
							_delay_ms(s);
							led(4,2,2);
							_delay_ms(s);
							led(5,2,2);
							_delay_ms(s);
							break;
					case 3: led(1,2,3);
							_delay_ms(s);
							led(2,2,3);
							_delay_ms(s);
							led(3,2,3);
							_delay_ms(s);
							led(4,2,3);
							_delay_ms(s);
							led(5,2,3);
							_delay_ms(s);
							break;
					case 4: led(1,2,4);
							_delay_ms(s);
							led(2,2,4);
							_delay_ms(s);
							led(3,2,4);
							_delay_ms(s);
							led(4,2,4);
							_delay_ms(s);
							led(5,2,4);
							_delay_ms(s);
							break;
					case 5:	led(1,2,5);
							_delay_ms(s);
							led(2,2,5);
							_delay_ms(s);
							led(3,2,5);
							_delay_ms(s);
							led(4,2,5);
							_delay_ms(s);
							led(5,2,5);
							_delay_ms(s);
							break;
				}break;
		case 3:switch(z)
				{
					case 1:	led(1,3,1);
							_delay_ms(s);
							led(2,3,1);
							_delay_ms(s);
							led(3,3,1);
							_delay_ms(s);
							led(4,3,1);
							_delay_ms(s);
							led(5,3,1);
							_delay_ms(s);
							break;		
					case 2: led(1,3,2);
							_delay_ms(s);
							led(2,3,2);
							_delay_ms(s);
							led(3,3,2);
							_delay_ms(s);
							led(4,3,2);
							_delay_ms(s);
							led(5,3,2);
							_delay_ms(s);
							break;
					case 3: led(1,3,3);
							_delay_ms(s);
							led(2,3,3);
							_delay_ms(s);
							led(3,3,3);
							_delay_ms(s);
							led(4,3,3);
							_delay_ms(s);
							led(5,3,3);
							_delay_ms(s);
							break;
					case 4: led(1,3,4);
							_delay_ms(s);
							led(2,3,4);
							_delay_ms(s);
							led(3,3,4);
							_delay_ms(s);
							led(4,3,4);
							_delay_ms(s);
							led(5,3,4);
							_delay_ms(s);
							break;
					case 5:	led(1,3,5);
							_delay_ms(s);
							led(2,3,5);
							_delay_ms(s);
							led(3,3,5);
							_delay_ms(s);
							led(4,3,5);
							_delay_ms(s);
							led(5,3,5);
							_delay_ms(s);
							break;
				}break;
		case 4:switch(z)
				{
					case 1:	led(1,4,1);
							_delay_ms(s);
							led(2,4,1);
							_delay_ms(s);
							led(3,4,1);
							_delay_ms(s);
							led(4,4,1);
							_delay_ms(s);
							led(5,4,1);
							_delay_ms(s);
							break;		
					case 2: led(1,4,2);
							_delay_ms(s);
							led(2,4,2);
							_delay_ms(s);
							led(3,4,2);
							_delay_ms(s);
							led(4,4,2);
							_delay_ms(s);
							led(5,4,2);
							_delay_ms(s);
							break;
					case 3: led(1,4,3);
							_delay_ms(s);
							led(2,4,3);
							_delay_ms(s);
							led(3,4,3);
							_delay_ms(s);
							led(4,4,3);
							_delay_ms(s);
							led(5,4,3);
							_delay_ms(s);
							break;
					case 4: led(1,4,4);
							_delay_ms(s);
							led(2,4,4);
							_delay_ms(s);
							led(3,4,4);
							_delay_ms(s);
							led(4,4,4);
							_delay_ms(s);
							led(5,4,4);
							_delay_ms(s);
							break;
					case 5:	led(1,4,5);
							_delay_ms(s);
							led(2,4,5);
							_delay_ms(s);
							led(3,4,5);
							_delay_ms(s);
							led(4,4,5);
							_delay_ms(s);
							led(5,4,5);
							_delay_ms(s);
							break;
				}break;
		case 5:switch(z)
				{
					case 1:	led(1,5,1);
							_delay_ms(s);
							led(2,5,1);
							_delay_ms(s);
							led(3,5,1);
							_delay_ms(s);
							led(4,5,1);
							_delay_ms(s);
							led(5,5,1);
							_delay_ms(s);
							break;		
					case 2: led(1,5,2);
							_delay_ms(s);
							led(2,5,2);
							_delay_ms(s);
							led(3,5,2);
							_delay_ms(s);
							led(4,5,2);
							_delay_ms(s);
							led(5,5,2);
							_delay_ms(s);
							break;
					case 3: led(1,5,3);
							_delay_ms(s);
							led(2,5,3);
							_delay_ms(s);
							led(3,5,3);
							_delay_ms(s);
							led(4,5,3);
							_delay_ms(s);
							led(5,5,3);
							_delay_ms(s);
							break;
					case 4: led(1,5,4);
							_delay_ms(s);
							led(2,5,4);
							_delay_ms(s);
							led(3,5,4);
							_delay_ms(s);
							led(4,5,4);
							_delay_ms(s);
							led(5,5,4);
							_delay_ms(s);
							break;
					case 5:	led(1,5,5);
							_delay_ms(s);
							led(2,5,5);
							_delay_ms(s);
							led(3,5,5);
							_delay_ms(s);
							led(4,5,5);
							_delay_ms(s);
							led(5,5,5);
							_delay_ms(s);
							break;
				}break;
	}
	
}

void tiefe(short y, short x)

{
	
	short s = 1;
	
	switch(y)
	{
	case 1:switch(x)
				{
					case 1:	led(1,1,1);
							_delay_ms(s);
							led(1,1,2);
							_delay_ms(s);
							led(1,1,3);
							_delay_ms(s);
							led(1,1,4);
							_delay_ms(s);
							led(1,1,5);
							_delay_ms(s);
							break;		
					case 2: led(1,2,1);
							_delay_ms(s);
							led(1,2,2);
							_delay_ms(s);
							led(1,2,3);
							_delay_ms(s);
							led(1,2,4);
							_delay_ms(s);
							led(1,2,5);
							_delay_ms(s);
							break;
					case 3: led(1,3,1);
							_delay_ms(s);
							led(1,3,2);
							_delay_ms(s);
							led(1,3,3);
							_delay_ms(s);
							led(1,3,4);
							_delay_ms(s);
							led(1,3,5);
							_delay_ms(s);
							break;
					case 4: led(1,4,1);
							_delay_ms(s);
							led(1,4,2);
							_delay_ms(s);
							led(1,4,3);
							_delay_ms(s);
							led(1,4,4);
							_delay_ms(s);
							led(1,4,5);
							_delay_ms(s);
							break;
					case 5:	led(1,5,1);
							_delay_ms(s);
							led(1,5,2);
							_delay_ms(s);
							led(1,5,3);
							_delay_ms(s);
							led(1,5,4);
							_delay_ms(s);
							led(1,5,5);
							_delay_ms(s);
							break;
				}break;
		case 2:switch(x)
				{
					case 1:	led(2,1,1);
							_delay_ms(s);
							led(2,1,2);
							_delay_ms(s);
							led(2,1,3);
							_delay_ms(s);
							led(2,1,4);
							_delay_ms(s);
							led(2,1,5);
							_delay_ms(s);
							break;		
					case 2: led(2,2,1);
							_delay_ms(s);
							led(2,2,2);
							_delay_ms(s);
							led(2,2,3);
							_delay_ms(s);
							led(2,2,4);
							_delay_ms(s);
							led(2,2,5);
							_delay_ms(s);
							break;
					case 3: led(2,3,1);
							_delay_ms(s);
							led(2,3,2);
							_delay_ms(s);
							led(2,3,3);
							_delay_ms(s);
							led(2,3,4);
							_delay_ms(s);
							led(2,3,5);
							_delay_ms(s);
							break;
					case 4: led(2,4,1);
							_delay_ms(s);
							led(2,4,2);
							_delay_ms(s);
							led(2,4,3);
							_delay_ms(s);
							led(2,4,4);
							_delay_ms(s);
							led(2,4,5);
							_delay_ms(s);
							break;
					case 5:	led(2,5,1);
							_delay_ms(s);
							led(2,5,2);
							_delay_ms(s);
							led(2,5,3);
							_delay_ms(s);
							led(2,5,4);
							_delay_ms(s);
							led(2,5,5);
							_delay_ms(s);
							break;
				}break;
		case 3:switch(x)
				{
					case 1:	led(3,1,1);
							_delay_ms(s);
							led(3,1,2);
							_delay_ms(s);
							led(3,1,3);
							_delay_ms(s);
							led(3,1,4);
							_delay_ms(s);
							led(3,1,5);
							_delay_ms(s);
							break;		
					case 2: led(3,2,1);
							_delay_ms(s);
							led(3,2,2);
							_delay_ms(s);
							led(3,2,3);
							_delay_ms(s);
							led(3,2,4);
							_delay_ms(s);
							led(3,2,5);
							_delay_ms(s);
							break;
					case 3: led(3,3,1);
							_delay_ms(s);
							led(3,3,2);
							_delay_ms(s);
							led(3,3,3);
							_delay_ms(s);
							led(3,3,4);
							_delay_ms(s);
							led(3,3,5);
							_delay_ms(s);
							break;
					case 4: led(3,4,1);
							_delay_ms(s);
							led(3,4,2);
							_delay_ms(s);
							led(3,4,3);
							_delay_ms(s);
							led(3,4,4);
							_delay_ms(s);
							led(3,4,5);
							_delay_ms(s);
							break;
					case 5:	led(3,5,1);
							_delay_ms(s);
							led(3,5,2);
							_delay_ms(s);
							led(3,5,3);
							_delay_ms(s);
							led(3,5,4);
							_delay_ms(s);
							led(3,5,5);
							_delay_ms(s);
							break;
				}break;
		case 4:switch(x)
				{
					case 1:	led(4,1,1);
							_delay_ms(s);
							led(4,1,2);
							_delay_ms(s);
							led(4,1,3);
							_delay_ms(s);
							led(4,1,4);
							_delay_ms(s);
							led(4,1,5);
							_delay_ms(s);
							break;	
					case 2: led(4,2,1);
							_delay_ms(s);
							led(4,2,2);
							_delay_ms(s);
							led(4,2,3);
							_delay_ms(s);
							led(4,2,4);
							_delay_ms(s);
							led(4,2,5);
							_delay_ms(s);
							break;
					case 3: led(4,3,1);
							_delay_ms(s);
							led(4,3,2);
							_delay_ms(s);
							led(4,3,3);
							_delay_ms(s);
							led(4,3,4);
							_delay_ms(s);
							led(4,3,5);
							_delay_ms(s);
							break;
					case 4: led(4,4,1);
							_delay_ms(s);
							led(4,4,2);
							_delay_ms(s);
							led(4,4,3);
							_delay_ms(s);
							led(4,4,4);
							_delay_ms(s);
							led(4,4,5);
							_delay_ms(s);
							break;
					case 5:	led(4,5,1);
							_delay_ms(s);
							led(4,5,2);
							_delay_ms(s);
							led(4,5,3);
							_delay_ms(s);
							led(4,5,4);
							_delay_ms(s);
							led(4,5,5);
							_delay_ms(s);
							break;
				}break;
		case 5:switch(x)
				{
					case 1:	led(5,1,1);
							_delay_ms(s);
							led(5,1,2);
							_delay_ms(s);
							led(5,1,3);
							_delay_ms(s);
							led(5,1,4);
							_delay_ms(s);
							led(5,1,5);
							_delay_ms(s);
							break;		
					case 2: led(5,2,1);
							_delay_ms(s);
							led(5,2,2);
							_delay_ms(s);
							led(5,2,3);
							_delay_ms(s);
							led(5,2,4);
							_delay_ms(s);
							led(5,2,5);
							_delay_ms(s);
							break;
					case 3: led(5,3,1);
							_delay_ms(s);
							led(5,3,2);
							_delay_ms(s);
							led(5,3,3);
							_delay_ms(s);
							led(5,3,4);
							_delay_ms(s);
							led(5,3,5);
							_delay_ms(s);
							break;
					case 4: led(5,4,1);
							_delay_ms(s);
							led(5,4,2);
							_delay_ms(s);
							led(5,4,3);
							_delay_ms(s);
							led(5,4,4);
							_delay_ms(s);
							led(5,4,5);
							_delay_ms(s);
							break;
					case 5:	led(5,5,1);
							_delay_ms(s);
							led(5,5,2);
							_delay_ms(s);
							led(5,5,3);
							_delay_ms(s);
							led(5,5,4);
							_delay_ms(s);
							led(5,5,5);
							_delay_ms(s);
							break;
				}break;
	}
}


void wag(short y, short z)
{

	short s = 1;
	
	switch(y)
	{ 
		case 1: switch(z)
				{
				case 1:	led(1,1,1);
						_delay_ms(s);
						led(1,2,1);
						_delay_ms(s);
						led(1,3,1);
						_delay_ms(s);
						led(1,4,1);
						_delay_ms(s);
						led(1,5,1);
						_delay_ms(s);
						break;	
				case 2:	led(1,1,2);
						_delay_ms(s);
						led(1,2,2);
						_delay_ms(s);
						led(1,3,2);
						_delay_ms(s);
						led(1,4,2);
						_delay_ms(s);
						led(1,5,2);
						_delay_ms(s);
						break;	
				case 3:	led(1,1,3);
						_delay_ms(s);
						led(1,2,3);
						_delay_ms(s);
						led(1,3,3);
						_delay_ms(s);
						led(1,4,3);
						_delay_ms(s);
						led(1,5,3);
						_delay_ms(s);
						break;	
				case 4:	led(1,1,4);
						_delay_ms(s);
						led(1,2,4);
						_delay_ms(s);
						led(1,3,4);
						_delay_ms(s);
						led(1,4,4);
						_delay_ms(s);
						led(1,5,4);
						_delay_ms(s);
						break;	
				case 5:	led(1,1,5);
						_delay_ms(s);
						led(1,2,5);
						_delay_ms(s);
						led(1,3,5);
						_delay_ms(s);
						led(1,4,5);
						_delay_ms(s);
						led(1,5,5);
						_delay_ms(s);
						break;
				}break;
		case 2: switch(z)
				{
				case 1:	led(2,1,1);
						_delay_ms(s);
						led(2,2,1);
						_delay_ms(s);
						led(2,3,1);
						_delay_ms(s);
						led(2,4,1);
						_delay_ms(s);
						led(2,5,1);
						_delay_ms(s);
						break;	
				case 2:	led(2,1,2);
						_delay_ms(s);
						led(2,2,2);
						_delay_ms(s);
						led(2,3,2);
						_delay_ms(s);
						led(2,4,2);
						_delay_ms(s);
						led(2,5,2);
						_delay_ms(s);
						break;	
				case 3:	led(2,1,3);
						_delay_ms(s);
						led(2,2,3);
						_delay_ms(s);
						led(2,3,3);
						_delay_ms(s);
						led(2,4,3);
						_delay_ms(s);
						led(2,5,3);
						_delay_ms(s);
						break;	
				case 4:	led(2,1,4);
						_delay_ms(s);
						led(2,2,4);
						_delay_ms(s);
						led(2,3,4);
						_delay_ms(s);
						led(2,4,4);
						_delay_ms(s);
						led(2,5,4);
						_delay_ms(s);
						break;	
				case 5:	led(2,1,5);
						_delay_ms(s);
						led(2,2,5);
						_delay_ms(s);
						led(2,3,5);
						_delay_ms(s);
						led(2,4,5);
						_delay_ms(s);
						led(2,5,5);
						_delay_ms(s);
						break;
				}break;	
		case 3: switch(z)
				{
				case 1:	led(3,1,1);
						_delay_ms(s);
						led(3,2,1);
						_delay_ms(s);
						led(3,3,1);
						_delay_ms(s);
						led(3,4,1);
						_delay_ms(s);
						led(3,5,1);
						_delay_ms(s);
						break;	
				case 2:	led(3,1,2);
						_delay_ms(s);
						led(3,2,2);
						_delay_ms(s);
						led(3,3,2);
						_delay_ms(s);
						led(3,4,2);
						_delay_ms(s);
						led(3,5,2);
						_delay_ms(s);
						break;	
				case 3:	led(3,1,3);
						_delay_ms(s);
						led(3,2,3);
						_delay_ms(s);
						led(3,3,3);
						_delay_ms(s);
						led(3,4,3);
						_delay_ms(s);
						led(3,5,3);
						_delay_ms(s);
						break;	
				case 4:	led(3,1,4);
						_delay_ms(s);
						led(3,2,4);
						_delay_ms(s);
						led(3,3,4);
						_delay_ms(s);
						led(3,4,4);
						_delay_ms(s);
						led(3,5,4);
						_delay_ms(s);
						break;	
				case 5:	led(3,1,5);
						_delay_ms(s);
						led(3,2,5);
						_delay_ms(s);
						led(3,3,5);
						_delay_ms(s);
						led(3,4,5);
						_delay_ms(s);
						led(3,5,5);
						_delay_ms(s);
						break;
				}break;	
		case 4: switch(z)
				{
				case 1:	led(4,1,1);
						_delay_ms(s);
						led(4,2,1);
						_delay_ms(s);
						led(4,3,1);
						_delay_ms(s);
						led(4,4,1);
						_delay_ms(s);
						led(4,5,1);
						_delay_ms(s);
						break;	
				case 2:	led(4,1,2);
						_delay_ms(s);
						led(4,2,2);
						_delay_ms(s);
						led(4,3,2);
						_delay_ms(s);
						led(4,4,2);
						_delay_ms(s);
						led(4,5,2);
						_delay_ms(s);
						break;	
				case 3:	led(4,1,3);
						_delay_ms(s);
						led(4,2,3);
						_delay_ms(s);
						led(4,3,3);
						_delay_ms(s);
						led(4,4,3);
						_delay_ms(s);
						led(4,5,3);
						_delay_ms(s);
						break;	
				case 4:	led(4,1,4);
						_delay_ms(s);
						led(4,2,4);
						_delay_ms(s);
						led(4,3,4);
						_delay_ms(s);
						led(4,4,4);
						_delay_ms(s);
						led(4,5,4);
						_delay_ms(s);
						break;	
				case 5:	led(4,1,5);
						_delay_ms(s);
						led(4,2,5);
						_delay_ms(s);
						led(4,3,5);
						_delay_ms(s);
						led(4,4,5);
						_delay_ms(s);
						led(4,5,5);
						_delay_ms(s);
						break;
				}break;	
		case 5: switch(z)
				{
				case 1:	led(5,1,1);
						_delay_ms(s);
						led(5,2,1);
						_delay_ms(s);
						led(5,3,1);
						_delay_ms(s);
						led(5,4,1);
						_delay_ms(s);
						led(5,5,1);
						_delay_ms(s);
						break;	
				case 2:	led(5,1,2);
						_delay_ms(s);
						led(5,2,2);
						_delay_ms(s);
						led(5,3,2);
						_delay_ms(s);
						led(5,4,2);
						_delay_ms(s);
						led(5,5,2);
						_delay_ms(s);
						break;	
				case 3:	led(5,1,3);
						_delay_ms(s);
						led(5,2,3);
						_delay_ms(s);
						led(5,3,3);
						_delay_ms(s);
						led(5,4,3);
						_delay_ms(s);
						led(5,5,3);
						_delay_ms(s);
						break;	
				case 4:	led(5,1,4);
						_delay_ms(s);
						led(5,2,4);
						_delay_ms(s);
						led(5,3,4);
						_delay_ms(s);
						led(5,4,4);
						_delay_ms(s);
						led(5,5,4);
						_delay_ms(s);
						break;	
				case 5:	led(5,1,5);
						_delay_ms(s);
						led(5,2,5);
						_delay_ms(s);
						led(5,3,5);
						_delay_ms(s);
						led(5,4,5);
						_delay_ms(s);
						led(5,5,5);
						_delay_ms(s);
						break;
				}break;	
	}
}




int main(void)
{

	short o = 1;
	short Q = 10000;
	int x;

	while(1)
	{	
		do
		{
			wag(5,1);
			wag(1,1);
			senk(1,1);
			led(2,5,1);
			_delay_ms(o);
			led(3,5,1);
			_delay_ms(o);
			led(3,4,1);
			_delay_ms(o);
			led(3,3,1);
			_delay_ms(o);
		}while(x=0;x<1000;x++)
		
		senk(3,1);
		_delay_ms(o);
		senk(4,1);
		
		_delay_ms(Q);


	}//End of while
return 0;
}	