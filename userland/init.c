#include <stdio.h>
#include <unistd.h>

int main() {
    printf("-------------------------------------------\n");
    printf("        BIENVENUE SUR MonOS v0.1          \n");
    printf("         (Darwin-compatible Core)         \n");
    printf("-------------------------------------------\n");

    printf("[INFO] Initialisation des services Apple-like...\n");
    
    // Simulation du lancement du WindowServer
    printf("[INFO] Lancement du WindowServer (Quartz)...\n");

    while(1) {
        sleep(1000); // Garde l'OS actif
    }
    return 0;
}
