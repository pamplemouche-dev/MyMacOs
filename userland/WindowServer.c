#include <stdio.h>
#include <stdlib.h>

// Définitions de couleurs style macOS Sonoma (au format Hexa)
#define MAC_TRANSPARENT_GRAY  0xCC1E1E1E  // Avec canal Alpha pour la transparence
#define MAC_BACKGROUND_WHITE   0xFFF0F0F0
#define MAC_BUTTON_RED         0xFFFF5F57
#define MAC_BUTTON_YELLOW      0xFFFFBD2E
#define MAC_BUTTON_GREEN       0xFF28C841

// Structure pour un élément graphique (Widget)
typedef struct {
    int x, y, width, height;
    unsigned int color;
    char* text;
} Widget;

// Fonction pour dessiner une fenêtre style macOS
void draw_mac_window(char* title, int x, int y, int w, int h) {
    printf("[GUI] Dessin d'une fenêtre à [%d,%d] size [%dx%d]\n", x, y, w, h);
    printf("[GUI]   - Arrière-plan : Flou translucide chargé (Gaussian Blur).\n");
    
    // Les boutons rouge, jaune, vert (feu tricolore)
    printf("[GUI]   - Dessin Boutons [");
    printf("\033[31mO\033[0m"); // Rouge (Fermer)
    printf("\033[33mO\033[0m"); // Jaune (Réduire)
    printf("\033[32mO\033[0m"); // Vert (Agrandir)
    printf("] à gauche.\n");
    
    printf("[GUI]   - Titre : \033[1m%s\033[0m au centre.\n", title);
}

// Fonction pour dessiner un bouton style macOS
void draw_mac_button(char* label, int x, int y) {
    printf("[GUI]     - Bouton [%s] dessiné (fond gris clair, coins arrondis).\n", label);
}

int main() {
    printf("Initialisation de Quartz (MonOS WindowServer)...\n");
    printf("[GUI] Chargement du pilote graphique (Framebuffer).\n");
    
    // Dessiner le fond d'écran
    printf("[GUI] Dessin du fond d'écran (Image: Ventura_Wallpaper.jpg).\n");
    
    // Dessiner la barre de menus en haut (translucide)
    printf("[GUI] Dessin de la MenuBar (Top, Translucide Gray).\n");
    
    // Ouvrir la fenêtre de l'Utilitaire de Disque
    draw_mac_window("Utilitaire de Disque", 100, 100, 640, 480);
    
    // Dessiner les éléments à l'intérieur de la fenêtre
    printf("[GUI]     - Liste des disques (à gauche, fond blanc).\n");
    printf("[GUI]     - Icône Toshiba Trackpad détectée (I2C Bus).\n"); // Pour te rappeler ton trackpad
    
    draw_mac_button("S.O.S", 300, 150);
    draw_mac_button("Effacer", 400, 150);
    draw_mac_button("Partitionner", 500, 150);

    return 0;
}
