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

# Remplace ta section kernel par celle-ci :
kernel:
	@echo "[2/4] Compilation du vrai noyau MonOS..."
	mkdir -p $(ROOTFS)/System/Library/Kernels
	# On compile l'assembleur
	nasm -f elf32 $(KRNL_SRC)/src/boot.s -o boot.o
	# On compile le C
	gcc -m32 -c $(KRNL_SRC)/src/kernel.c -o kernel.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra
	# On lie le tout pour faire le binaire final
	ld -m elf_i386 -T linker.ld -o $(ROOTFS)/System/Library/Kernels/kernel boot.o kernel.o
userland:
	@echo "Compilation des utilitaires de base..."
	gcc $(USER_SRC)/init.c -o $(ROOTFS)/sbin/init
