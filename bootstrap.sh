#!/bin/bash
# Script de déploiement de la structure MonOS

echo "Construction du squelette de MonOS..."

# Création des dossiers racine style macOS
mkdir -p RootFS/{Applications,Library,System,Users,Volumes,dev,etc,usr,sbin}

# Création de la hiérarchie System (la plus importante pour la compatibilité)
mkdir -p RootFS/System/Library/{CoreServices,Extensions,Frameworks,Fonts}

# Création des dossiers utilisateurs
mkdir -p RootFS/Users/Shared

# Permissions de base
chmod -R 755 RootFS/

echo "-----------------------------------------------"
echo "L'arborescence est prête dans le dossier RootFS/"
echo "Vous pouvez maintenant lancer 'make' pour compiler."
echo "-----------------------------------------------"
