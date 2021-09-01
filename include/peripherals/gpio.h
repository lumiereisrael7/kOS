#ifndef	_P_GPIO_H
#define	_P_GPIO_H

#include "base.h"

//GPIO address maping

#define     GPIO_BASE       (PERIPHERAL_BASE + 0x200000)

#define     GPFSEL0         (PERIPHERAL_ABSE + 0x200000)
#define     GPFSEL1         (PERIPHERAL_BASE + 0x200004)
#define     GPFSEL2         (PERIPHERAL_BASE + 0x200008)
#define     GPFSEL3         (PERIPHERAL_BASE + 0x20000C)
#define     GPFSEL4         (PERIPHERAL_BASE + 0x200010)
#define     GPFSEL5         (PERIPHERAL_BASE + 0x200014)

#define     GPSET0          (PERIPHERAL_BASE + 0x20001C)
#define     GPSET1          (PERIPHERAL_BASE + 0x200020) 

#define     GPCLR0          (PERIPHERAL_BASE + 0x200028)
#define     GPCLR1          (PERIPHERAL_BASE + 0x20002C)

#define     GPLEV0          (PERIPHERAL_BASE + 0x200034)
#define     GPLEV1          (PERIPHERAL_BASE + 0x200038)

#define     GPEDS0          (PERIPHERAL_BASE + 0x200040)
#define     GPEDS1          (PERIPHERAL_BASE + 0x200044)

#define     GPREN0          (PERIPHERAL_BASE + 0x20004C)
#define     GPREN1          (PERIPHERAL_BASE + 0x200050)

#define     GPFEN0          (PERIPHERAL_BASE + 0x200058)
#define     GPFEN1          (PERIPHERAL_BASE + 0x20005C)

#define     GPHEN0          (PERIPHERAL_BASE + 0x200064)
#define     GPHEN1          (PERIPHERAL_BASE + 0x200068)

#define     GPLEN0          (PERIPHERAL_BASE + 0x200070)
#define     GPLEN1          (PERIPHERAL_BASE + 0x200074)

#define     GPAREN0         (PERIPHERAL_BASE + 0x20007C)
#define     GPAREN1         (PERIPHERAL_BASE + 0x200080) 

#define     GPAFEN0         (PERIPHERAL_BASE + 0x200088)
#define     GPAFEN1         (PERIPHERAL_BASE + 0x20008C)

#define     GPPUD           (PERIPHERAL_BASE + 0x200094)
#define     GPPUDCLK0       (PERIPHERAL_BASE + 0x200098)
#define     GPPUDCLK1       (PERIPHERAL_BASE + 0x20009C)

//GPIO pin mapping
#define     GPIO0           0
#define     GPIO1           1
#define     GPIO2           2
#define     GPIO3           3
#define     GPIO4           4
#define     GPIO5           5
#define     GPIO6           6
#define     GPIO7           7
#define     GPIO8           8
#define     GPIO9           9

#define     GPIO10          10
#define     GPIO11          11
#define     GPIO12          12
#define     GPIO13          13
#define     GPIO14          14
#define     GPIO15          15
#define     GPIO16          16
#define     GPIO17          17
#define     GPIO18          18
#define     GPIO19          19

#define     GPIO20          20
#define     GPIO21          21
#define     GPIO22          22
#define     GPIO23          23
#define     GPIO24          24
#define     GPIO25          25
#define     GPIO26          26
#define     GPIO27          27
#define     GPIO28          28
#define     GPIO29          29

#define     GPIO30          30
#define     GPIO31          31
#define     GPIO32          32
#define     GPIO33          33
#define     GPIO34          34
#define     GPIO35          35
#define     GPIO36          36
#define     GPIO37          37
#define     GPIO38          38
#define     GPIO39          39

#define     GPIO40          40
#define     GPIO41          41
#define     GPIO42          42
#define     GPIO43          43
#define     GPIO44          44
#define     GPIO45          45
#define     GPIO46          46
#define     GPIO47          47
#define     GPIO48          48
#define     GPIO49          49

#define     GPIO50          50
#define     GPIO51          51
#define     GPIO52          52
#define     GPIO53          53

#endif  /*_P_GPIO_H */
