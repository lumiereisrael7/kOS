#include "./modules/led/led.h"
#include "./modules/boot/boot.h"


void boot_fired(void)
{
    led_on(led_rouge, GPIO16);
    led_on(led_blanche, GPIO20);
    led_on(led_bleue, GPIO21);
}


