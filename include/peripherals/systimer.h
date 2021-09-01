#ifndef	_P_SYSTIMER_H
#define	_P_SYSTIMER_H

#include "peripherals/base.h"

#define SYSTIMER_CONTROL_STATUS        (PERIPHERAL_BASE + 0x3000)
#define SYSTIMER_CONTROL_LOW           (PERIPHERAL_BASE + 0x3004)
#define SYSTIMER_CONTROL_HIGH          (PERIPHERAL_BASE + 0x3008)
#define SYSTIMER_C0MPARE_0             (PERIPHERAL_BASE + 0x300C)
#define SYSTIMER_COMPARE_1             (PERIPHERAL_BASE + 0x3010)
#define SYSTIMER_COMPARE_2             (PERIPHERAL_BASE + 0x3014)
#define SYSTIMER_COMPARE_3             (PERIPHERAL_BASE + 0x3018)

#define SYSTIMER_CS_M0	(1 << 0)
#define SYSTIMER_CS_M1	(1 << 1)
#define SYSTIMER_CS_M2	(1 << 2)
#define SYSTIMER_CS_M3	(1 << 3)

#endif  /*_P_TIMER_H */




