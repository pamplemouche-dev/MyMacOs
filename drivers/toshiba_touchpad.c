#include <kernel/io.h>

/**
 * Ce driver gère les interruptions du bus I2C 
 * spécifiques aux ordinateurs Toshiba.
 */
void probe_toshiba_touchpad() {
    // 1. Détecter le bus I2C
    // 2. Envoyer le signal de réveil (Power On)
    // 3. Mapper les coordonnées X/Y
}
