/*
 * 
 * Kasper Nyhus Kaae
 * s195087
 */ 

#include <avr/io.h>
#include <util/delay.h>





int main(void) {
    

	while (1)
    {
		for (int i=0; i<2; i++) {
            PORTB |= (1<<7);
            _delay_ms(100);
            PORTB &=~ (1<<7);
            _delay_ms(100);
        
        _delay_ms(1000);
        }
    }
}
