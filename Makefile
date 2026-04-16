# Makefile pour MonOS - Base Darwin/BSD
NAME = MonOS
ARCH = x86_64

# Chemins
ROOTFS = ./RootFS
KRNL_SRC = ./kernel
USER_SRC = ./userland

all: setup kernel userland

setup:
	@echo "Initialisation de l'arborescence macOS..."
	mkdir -p $(ROOTFS)/System/Library/CoreServices
	mkdir -p $(ROOTFS)/Library/Frameworks
	mkdir -p $(ROOTFS)/Applications
	mkdir -p $(ROOTFS)/Users/Shared
	mkdir -p $(ROOTFS)/usr/bin

kernel:
	@echo "Compilation du noyau..."
	# Commande de compilation du noyau ici

userland:
	@echo "Compilation des utilitaires de base..."
	gcc $(USER_SRC)/init.c -o $(ROOTFS)/sbin/init
