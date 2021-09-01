#include"./headers/test_led.h"



void register_cb_for_light_up_led(void (*timer) (void), void (*handle_timer_irq_led_on) (void))
{

    printf("\r\nDans la fonction register_cb");
    (*handle_timer_irq_led_on)();
    
    printf("\r\nExecute la fonction handler_timer_irq_led");
    (*timer)(); 
    printf("\r\nAprès la fonction timer_start");
    
}



