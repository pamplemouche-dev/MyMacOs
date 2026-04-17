/* kernel/main.c */
#define CHECK_FLAG(flags,bit) ((flags) & (1 << (bit)))

void kernel_main() {
    // Adresse de la mémoire vidéo pour l'affichage VGA de base
    char *video_memory = (char *) 0xb8000;
    
    // On écrit "MonOS Booting..." directement à l'écran
    const char *str = "MonOS : Chargement de l'interface graphique...";
    for (int i = 0; str[i] != '\0'; i++) {
        video_memory[i*2] = str[i];
        video_memory[i*2+1] = 0x07; // Couleur Gris/Noir
    }

    while(1); // Empêche le processeur de s'arrêter
}
