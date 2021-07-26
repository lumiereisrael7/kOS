#include "../boot/boot.h"
#include"../gpio/gpio.h"

typedef enum
{
    led_rouge,
    led_bleue,
    led_blanche
} led_t;


extern void led_event(led_t led);


void led_on(led_t led, gpio_pin_t pin);
void led_off(led_t led, gpio_pin_t pin);
