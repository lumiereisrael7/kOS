#include "uart.h"
#include "../base.h"


static uart_t uart = (uart_t*) AUX_BASE;


uart_t* get_uart(void)
{
    return uart;
}


void uart_init(int baud, int bits)
{
    uart->IRQ = AUX_BASE;
    uart->ENABLES = AUX_ENABLE_MINIUART;
    uart->MU_IER = 0;
    uart->MU_CNTL = 0;
    
    if (bit == 8)
        uart->MU_LCR = AUX_MULCR_8BIT_MODE;
    else 
        uart->MU_LCR = 0;

    uart->MU_MCR = 0;

    uart->MU_IER = 0;
    uart->MU_IIR = 0xC6;

    uart->MU_BAUD = (SYSFREQ / ( 8 * baud )) -1;

}


void uart_write( char c)
{

}