; Bootloader Multiboot
section .multiboot
    dd 0x1BADB002        ; Magic number
    dd 0x00              ; Flags
    dd -(0x1BADB002 + 0x00) ; Checksum

section .text
global _start
extern kernel_main

_start:
    cli                  ; Désactive les interruptions
    call kernel_main     ; Saute vers ton code C
    hlt                  ; Arrête si le noyau quitte
