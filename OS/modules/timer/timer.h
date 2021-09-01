#ifndef	_TIMER_H
#define	_TIMER_H


#include "utils.h"
#include "printf.h"
#include "../boot/boot.h" 
#include "../led/led.h"

#define interval   (3 * 1000 * 1000)

void timer_init ( void );
//void handle_timer_irq ( void );

unsigned int generic_timer_init ();
//void handle_generic_timer_irq ( void );

extern void gen_timer_init(void);
extern void gen_timer_reset(unsigned int);

void* timer_start(void);

#endif  /*_TIMER_H */
