#include"led.h"


volatile static unsigned int lit = 0;


void led_init(void)
{
    gpio_init();
}



void led_red_on(void)
{

   gpio_pin_on(LED_RED_GPIO5);

}


void led_white_on(void)
{

    gpio_pin_on(LED_WHITE_GPIO26);

}



void led_blue_on(void)
{

    gpio_pin_on(LED_BLUE_GPIO6);

}

void led_white_off(void)
{
    gpio_pin_off(LED_WHITE_GPIO26);
}



void led_red_off(void)
{
    gpio_pin_off(LED_RED_GPIO5);
}



void led_blue_off(void)
{
    gpio_pin_off(LED_BLUE_GPIO6);
}

void* handle_irq_led(void)
{
    
   printf("\r\nLe gestionnaire de la led marche");

   if (lit == 0)
   {
       led_white_on();
       lit = 1;
   }
   else
   {
       led_white_off();
       lit = 0;
   }
        
}
