

#include <mega32.h>
#include <delay.h>


void main(void)
{
DDRC=255;

while (1)
      {
              PORTA.2=1;
        delay_ms(500);
        PORTC.2=0;
        delay_ms(500);
        PORTC.3=1;
        delay_ms(500);
        PORTC.3=0;
        delay_ms(500);
        PORTC.6=1;
        delay_ms(500);
        PORTC.6=0;
        delay_ms(500);
        PORTC.5=1;
        delay_ms(500);
        PORTC.5=0;
        delay_ms(500);
        PORTC.4=1;
        delay_ms(500);
        PORTC.4=0;
        delay_ms(500);
        PORTC.1=1;
        delay_ms(500);
        PORTC.1=0;
        delay_ms(500);
        PORTC.0=1;
        delay_ms(500);
		PORTC.0=0;
		delay_ms(500);
		PORTC=255;
		delay_ms(500);
		PORTC=0;
		delay_ms(500);	
      }
}
