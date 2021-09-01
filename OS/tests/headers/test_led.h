#ifndef _TEST_LED_H
#define _TEST_LED_H

#include"../../modules/led/led.h"
#include"../../modules/timer/timer.h"


void register_cb_for_light_up_led(void (*timer) (void), void (*handle_timer_irq_led) (void));

#endif

