#ifndef GPIO_H
#define GPIO_H

#include "../base.h"

#define GPIO_BASE  (PERIPHERAL_BASE + 0x200000)
#define GPSET0      GPIO_BASE + 0x1c
#define GPSET1      GPIO_BASE + 0x20 
#define GPCLR0      GPIO_BASE + 0x28
#define GPCLR1      GPIO_BASE + 0x2c
#define GPPUD       GPIO_BASE + 0x94
#define GPLEV0      GPIO_BASE + 0x34 
#define GPLEV1      GPIO_BASE + 0x38


typedef unsigned int reg_ro_t;
typedef unsigned int reg_rw_t;
typedef unsigned int reg_wo_t;

#define      INPUT                 0
#define      OUTPUT                1

#define      GPIO_MAX_PIN         53

#define      PULL_NONE             0
#define      PULL_DOWN             1
#define      PULL_UP               2


#define      LED_RED_GPIO5         5

#define      LED_BLUE_GPIO6        6

#define      LED_WHITE_GPIO26    26

/*
typedef enum 
{
    GPIO1=1,
    GPIO2,
    GPIO3,
    GPIO4,
    GPIO5,
    GPIO6,
    GPIO7,
    GPIO8,
    GPIO9,
    GPIO10 = 10,
    GPIO11,
    GPIO12,
    GPIO13,
    GPIO14,
    GPIO15,
    GPIO16,
    GPIO17,
    GPIO18,
    GPIO19,
    GPIO20 = 20,
    GPIO21,
    GPIO22,
    GPIO23,
    GPIO24,
    GPIO25,
    GPIO26,
    GPIO27,
    GPIO28,
    GPIO29,
    GPIO30 = 30,
    GPIO31,
    GPIO32,
    GPIO33,
    GPIO34,
    GPIO35,
    GPIO36,
    GPIO37,
    GPIO38,
    GPIO39,
    GPIO40 = 40,
    GPIO41,
    GPIO42,
    GPIO43,
    GPIO44,
    GPIO45,
    GPIO46,
    GPIO47,
    GPIO48,
    GPIO49,
    GPIO50 = 50,
    GPIO51,
    GPIO52,
    GPIO53,
    GPIO54
} 
gpio_pin_t;
*/

/*
typedef struct 
{
    reg_rw_t    GPFSEL0;
    reg_rw_t    GPFSEL1;
    reg_rw_t    GPFSEL2;
    reg_rw_t    GPFSEL3;
    reg_rw_t    GPFSEL4;
    reg_rw_t    GPFSEL5;
    reg_ro_t    Reserved0;
    reg_wo_t    GPSET0;
    reg_wo_t    GPSET1;
    reg_ro_t    Reserved1;
    reg_wo_t    GPCLR0;
    reg_wo_t    GPCLR1;
    reg_ro_t    Reserved2;
    reg_wo_t    GPLEV0;
    reg_wo_t    GPLEV1;
    reg_ro_t    Reserved3;
    reg_wo_t    GPEDS0;
    reg_wo_t    GPEDS1;
    reg_ro_t    Reserved4;
    reg_wo_t    GPREN0;
    reg_wo_t    GPREN1;
    reg_ro_t    Reserved5;
    reg_wo_t    GPFEN0;
    reg_wo_t    GPFEN1;
    reg_ro_t    Reserved6;
    reg_wo_t    GPHEN0;
    reg_wo_t    GPHEN1;
    reg_ro_t    Reserved7;
    reg_wo_t    GPLEN0;
    reg_wo_t    GPLEN1;
    reg_ro_t    Reserved8;
    reg_wo_t    GPAREN0;
    reg_wo_t    GPAREN1;
    reg_ro_t    Reserved9;
    reg_wo_t    GPAFEN0;
    reg_wo_t    GPAFEN1;
    reg_ro_t    Reserved10;
    reg_wo_t    GPPUD;
    reg_wo_t    GPPUDCLK0;
    reg_wo_t    GPPUDCLK1;
    reg_ro_t    Reserved11;
}
gpio_t;
*/


void gpio_init();
unsigned int gpio_pin_configure(unsigned int pin, int function);
void gpio_pin_on(unsigned int  pin);
void gpio_pin_off(unsigned int pin);
unsigned int  gpio_get_value(unsigned int pin);
unsigned int gpio_pin_trigger(unsigned int pin, unsigned int  pull);
void gpio_toggle_pin(unsigned int pin);

#endif