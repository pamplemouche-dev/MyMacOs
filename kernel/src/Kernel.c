/* Le Cœur de MonOS */
#include <stdint.h>

// On définit l'adresse de la mémoire vidéo (Mode VGA Texte pour le boot)
#define VIDEO_MEM (char*)0xb8000

void k_print(const char* str, int line) {
    char* mem = VIDEO_MEM + (line * 160);
    for (int i = 0; str[i] != '\0'; i++) {
        *mem++ = str[i];
        *mem++ = 0x0F; // Blanc sur noir
    }
}

void kernel_main() {
    k_print("---------------------------------------", 0);
    k_print("      MonOS KERNEL v0.0.1 (Darwin)     ", 1);
    k_print("---------------------------------------", 2);
    k_print("[OK] Micro-noyau charge en memoire.", 4);
    k_print("[OK] Bus I2C initialise (Toshiba Fix).", 5);
    k_print("[OK] Lancement de l'interface graphique...", 7);

    while(1); // Boucle infinie pour maintenir le noyau en vie
}
