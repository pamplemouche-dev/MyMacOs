/* MonOS QuartzCore - Framework d'animation et de composite */

#ifndef QUARTZCORE_H
#define QUARTZCORE_H

// Applique un flou gaussien sur une zone de l'écran
// C'est ce qui fait l'effet "verre dépoli" de macOS
void apply_gaussian_blur(int x, int y, int width, int height);

// Anime une fenêtre (ex: l'effet Génie quand on réduit une fenêtre)
void animate_window_minimize(int window_id);

#endif
