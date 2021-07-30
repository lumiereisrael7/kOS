#include "timer.h"

static struct timer timer_table[16];
volatile unsigned int id_timer = 0;

static arm_timer_t* timer_base;

void timer_configure(void)
{
    timer_base = (arm_timer_t*)ARM_TIMER_BASE;

    /* setup the ARM Timer */
    timer_base->Control =
                 ARM_TIMER_CTRL_32BIT |
                 ARM_TIMER_CTRL_ENABLE |
                 ARM_TIMER_CTRL_INT_ENABLE |
                 ARM_TIMER_CTRL_PRESCALE_256;
}



arm_timer_t* get_arm_timer(void)
{
    return timer_base;
}


unsigned int timer_new(unsigned int time)
{
    volatile unsigned int cur;
    for(cur = 0; cur < 16; cur++)
        if(!timer_table[cur].is_using)
            break;

    if(cur == 16)
        return -1;
    
    timer_table[cur].id = cur;
    timer_table[cur].time = time;
    timer_table[cur].is_using = 1;

    return cur;
}



unsigned int timer_start(unsigned int id_timer, void (*cb) (void))
{
    if(id_timer < 0 || id_timer > 15)
        return -1;

    systimer_wait_micro_seconds(timer_table[id_timer].time);
    (*cb)();
    
    timer_table[id_timer].is_using = 0;

    return 1;
}