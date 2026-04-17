; Header Multiboot pour le mode graphique
section .multiboot
    align 4
    dd 0x1BADB002             ; Magic
    dd 0x05                   ; Flags (Graphics + Modules)
    dd -(0x1BADB002 + 0x05)   ; Checksum
    
    ; Paramètres graphiques
    dd 0, 0, 0, 0, 0
    dd 0                      ; 0 = Mode graphique
    dd 1024                   ; Largeur
    dd 768                    ; Hauteur
    dd 32                     ; Couleurs (32 bits)
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
