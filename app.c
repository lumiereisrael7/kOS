#include"app.h"

volatile unsigned int tim;

void boot_fired(void)
{
    led_init();
    led_white_on();
    
    for (tim = 0; tim < 50000000; tim++);
    
    led_white_off();
    led_red_on();
    
    for (tim = 0; tim < 50000000; tim++);
    
    led_red_off();
    led_blue_on();
    
    for (tim = 0; tim < 50000000; tim++);
    
    led_blue_off();
    
    for (tim = 0; tim < 50000000; tim++);
    
    led_white_on();
    led_blue_on();
    led_red_on();
}


