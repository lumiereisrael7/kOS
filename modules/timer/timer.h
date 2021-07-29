#ifndef TIMER_H
#define TIMER_H

#include "../base.h"
#include "../systimer/systimer.h"

#define ARM_TIMER_BASE    (PERIPHERAL_BASE + 0xB400)


#define ARM_TIMER_CNTRL_32BIT               (1 << 1)
#define ARM_TIMER_CNTRL_PRESCALE_256        (2 << 2)

#define ARM_TIMER_CNTRL_INT_ENABLE          (1 << 5)
#define ARM_TIMER_CNTRL_INT_DESABLE         (0 << 5)

#define ARM_TIMER_CNTRL_ENABLE              (1 << 7)
#define ARM_TIMER_CNTRL_DISABLE             (0 << 7)


struct timer
{
    unsigned int id;
    unsigned int time;
    unsigned int is_using;
};

typedef struct 
{
    volatile unsigned int Load;
    volatile unsigned int Value;
    volatile unsigned int Control;
    volatile unsigned int IRQClear;
    volatile unsigned int RAWIRQ;
    volatile unsigned MaskedIRQ;
    volatile unsigned Reload;
    volatile unsigned PreDivider;
    volatile unsigned FreeRunningCounter;
}
arm_timer_t;


void timer_configure(void);
unsigned int timer_start(unsigned int micro_seconds);
unsigned int timer_new(unsigned int time);
unsigned int timer_register_cb(unsigned int id_timer, void (*cb)(void));


extern arm_timer_t* get_arm_timer(void);


#endif


