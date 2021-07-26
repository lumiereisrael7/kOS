#include "led.h"




void led_event(led_t led)
{

}


void led_on(led_t led, gpio_pin_t pin)
{

    gpio_set_pin_output(pin);

}


void led_off(led_t led, gpio_pin_t pin)
{
    gpio_set_pin_input(pin);
}