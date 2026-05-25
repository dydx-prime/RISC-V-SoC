MEMORY {
    RAM (rwx) : ORIGIN = 0x00000000, LENGTH = 12K
}
SECTIONS {
    . = 0x00000000;
    .text   : { *(.text*) } > RAM
    .rodata : { *(.rodata*) } > RAM
    .data   : { *(.data*) } > RAM
    .bss    : { *(.bss*)  } > RAM
    _end = .;
}
