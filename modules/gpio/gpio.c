#include"gpio.h"

static gpio_t * gpio = (gpio_t*)GPIO_BASE;


gpio_t * gpio_get()
{
    return gpio;
}


void mmio_write(long reg, unsigned int val) { *(volatile unsigned int *)reg = val; }
unsigned int mmio_read(long reg) { return *(volatile unsigned int *)reg; }


unsigned int gpio_call(unsigned int pin, unsigned int value, unsigned int base, unsigned int field_size, unsigned int field_max) {
    unsigned int field_mask = (1 << field_size) - 1;
  
    if (pin > field_max) return 0;
    if (value > field_mask) return 0; 

    unsigned int num_fields = 32 / field_size;
    unsigned int reg = base + ((pin / num_fields) * 4);
    unsigned int shift = (pin % num_fields) * field_size;

    unsigned int curval = mmio_read(reg);
    curval &= ~(field_mask << shift);
    curval |= value << shift;
    mmio_write(reg, curval);

    return 1;
}

unsigned int gpio_set(unsigned int pin, unsigned int value) 
{ 
    return gpio_call(pin, value, gpio->GPFSEL1, 1, GPIO_MAX_PIN); 
}


unsigned int gpio_clear (unsigned int pin, unsigned int value) 
{ 
    return gpio_call(pin, value, gpio->GPCLR1, 1, GPIO_MAX_PIN); 
}

unsigned int gpio_pull (unsigned int pin, unsigned int value) 
{ 
    return gpio_call(pin, value, gpio->GPPUD, 2, GPIO_MAX_PIN); 
}

unsigned int gpio_function(unsigned int pin, unsigned int value) 
{ 
    return gpio_call(pin, value, gpio->GPFSEL0, 3, GPIO_MAX_PIN); 
}


void gpio_set_pin_up(gpio_pin_t pin)
{
    gpio_pull(pin, pull_up);
}

void gpio_set_pin_down(gpio_pin_t pin)
{
    gpio_pull(pin, pull_down);
}


void gpio_set_pin_none(gpio_pin_t pin)
{
    gpio_pull(pin, pull_none);
}

gpio_value_t gpio_get_value( gpio_pin_t pin)
{
    gpio_value_t result = pull_up;

    switch( pin / 32 )
    {
        case 0:
            result = gpio->GPLEV0 & ( 1 << pin );
            break;

        case 1:
            result = gpio->GPLEV1 & ( 1 << ( pin - 32 ) );
            break;

        default:
            break;
    }

    if( result != pull_up )
    {
        if( result )
            result = pull_down;
    }

    return result;
}


void gpio_toggle_pin(gpio_pin_t pin)
{

    if (gpio_get_value(pin) == pull_up )
        gpio_set_pin_down(pin);
    else if ( gpio_get_value(pin) == pull_down )
        gpio_set_pin_up(pin);

}

void gpio_set_pin_output(gpio_pin_t pin)
{
    gpio_set_pin_down(pin);
    gpio_function(pin, GPIO_FUNCTION_OUT);
}



void gpio_set_pin_input(gpio_pin_t pin)
{
    gpio_set_pin_none(pin);
    gpio_function(pin, 0);
}