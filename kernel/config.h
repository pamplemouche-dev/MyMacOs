/* Configuration du noyau MonOS */

#ifndef CONFIG_H
#define CONFIG_H

// Support d'architecture
#define TARGET_X86_64

// DRIVERS MATÉRIEL
#define ENABLE_I2C_BUS        1  // Crucial pour ton trackpad
#define ENABLE_PS2_MOUSE      1  // Backup pour les vieux Toshiba
#define ENABLE_USB_HID        1

// PARAMÈTRES SYSTÈME
#define OS_NAME "MonOS"
#define OS_VERSION "0.0.1-Alpha"

#endif
