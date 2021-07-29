#ifndef INTERRUPT_H
#define INTERRUPT_H

#include "../base.h"

#define INTERRUPT_BASE          (PERIPHERAL_BASE + 0xB000)
#define INTERRUPT_PENDING       (INTERRUPT_BASE + 0x200)

//  IRQ NUMBER 

#define SYSTEM_TIMER_1  1
#define ARM_TIMER       64


typedef struct 
{
    unsigned int irq_basic_pending;
    unsigned int irq_gpu_pending1;
    unsigned int irq_gpu_pending2;
    unsigned int fiq_control;
    unsigned int irq_gpu_enable1;
    unsigned int irq_gpu_enable2;
    unsigned int irq_basic_enable;
    unsigned int irq_gpu_disable1;
    unsigned int irq_gpu_disable2;
    unsigned int irq_basic_disable;
}
interrupt_register_t;

#endif