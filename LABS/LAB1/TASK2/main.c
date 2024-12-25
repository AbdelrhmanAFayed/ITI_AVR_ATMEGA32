

#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>

#define SET_BIT(REG, BIT) ((REG) |= (1 << (BIT)))
#define CLEAR_BIT(REG, BIT) ((REG) &= ~(1 << (BIT)))
#define TOGGLE_BIT(REG, BIT) ((REG) ^= (1 << (BIT)))
#define GET_BIT(REG, BIT) ((REG>>BIT)&1)

int main(void)
{
	//DDRA = 0b11111101 ;
	SET_BIT(DDRA, PINA0);
	SET_BIT(DDRA, PINA1);
	SET_BIT(DDRA, PINA2);
	SET_BIT(DDRA, PINA3);
	CLEAR_BIT(DDRA,PINA4);
	

	SET_BIT(PORTA,PINA4) ;

	int old_val = 1 ;
	int new_val = 1 ;
	int counter = 0 ;
	
	/* Replace with your application code */
	while (1)
	{
			_delay_ms(150);
			new_val = GET_BIT(PINA,PINA4);
			if(new_val == 0)
			{
				_delay_ms(75);
				
				if (new_val == old_val)
				{}
				else
				{
					counter++ ;
				}
			
			} 	
			old_val = new_val ;
			if(counter > 15)
			{
				counter = 0 ;
			}				
			
			if(GET_BIT(counter,0))
			{
			SET_BIT(PORTA,PINA0) ;	
			}
			else
			{
			CLEAR_BIT(PORTA,PINA0) ;	
			}
			
			if(GET_BIT(counter,1))
			{
				SET_BIT(PORTA,PINA1) ;
			}
			else
			{
				CLEAR_BIT(PORTA,PINA1) ;
			}

			if(GET_BIT(counter,2))
			{
				SET_BIT(PORTA,PINA2) ;
			}
			else
			{
				CLEAR_BIT(PORTA,PINA2) ;
			}			
			if(GET_BIT(counter,3))
			{
				SET_BIT(PORTA,PINA3) ;
			}
			else
			{
				CLEAR_BIT(PORTA,PINA3) ;
			}
		
	}
	return 0;
}
