#include "timer.h"



unsigned int generic_timer_init ()
{    
    //static unsigned int interval = 5 * 1000 * 1000;
	//printf("intervale de : %u\n", interval);
	
    printf("\r\nTimer initialisé\n");
    gen_timer_init();
    gen_timer_reset(interval);
}


void *timer_start(void)
{
    gen_timer_reset(interval);
}



