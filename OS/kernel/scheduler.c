#include "scheduler.h"

void kernel_main(void)
{
	uart_init();
	init_printf(0, putc);
	int el = get_el();
	printf("Exception level: %d \r\n", el);
	printf("kernel boots...\n");

	irq_vector_init();
	generic_timer_init();
	enable_interrupt_controller();
	enable_irq();

	printf("\nBoot fired\n");
	boot_fired();
	printf("\nBoot fired end\n");


	while (1) 
	{
		uart_send(uart_recv());
	}
}


