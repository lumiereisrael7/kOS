SECTIONS
{
    . = 0x80000;     /* Kernel load address for AArch64 */
    __start = .;

    __text_start = .;

    .text : 
    { 
        KEEP(*(.text.boot)) *(.text .text.* .gnu.linkonce.t*) 
    }
    __text_end = .;

    __rodata_start = .;

    .rodata :
    { 
        *(.rodata .rodata.* .gnu.linkonce.r*)  
    }

    __rodata_end = .;


    PROVIDE(_data = .);
    
    __data_start = .;

    .data : 
    { 
        *(.data .data.* .gnu.linkonce.d*) 
    
    }
    __data_end = .;

    .bss (NOLOAD) : {
        . = ALIGN(16);
        __bss_start = .;
        *(.bss .bss.*)
        *(COMMON)
        __bss_end = .;
    }
    _end = .;

    __bss_size = (__bss_end - __bss_start)>>3;
   
   /DISCARD/ : { *(.comment) *(.gnu*) *(.note*) *(.eh_frame*) }
}
