ENTRY(_start)
SECTIONS {
    . = 1M; /* Le noyau commence à 1Mo en mémoire */
    .text : { *(.multiboot) *(.text) }
    .data : { *(.data) }
    .bss  : { *(.bss)  }
}
