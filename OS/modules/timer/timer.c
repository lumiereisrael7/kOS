#include "timer.h"



static unsigned int interval = 5 * 1000 * 1000;
static unsigned int lit = 0;


void generic_timer_init ( void )
{
	printf("intervale de : %u\n", interval);
	gen_timer_init();
	gen_timer_reset(interval);
}

void handle_generic_timer_irq( void ) 
{

	printf("Reception de l'interruption: prochain dans  %u ticks\n\r", interval);


    gen_timer_reset(interval);
}
