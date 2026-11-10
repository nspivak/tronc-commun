*This project has been created as part of the 42 curriculum by [nspivak].*

## Description
Libft est le premier projet du tronc commun de 42. Son objectif est de recoder un ensemble de fonctions de la bibliothèque standard du C (libc), ainsi que des fonctions utilitaires supplémentaires et des fonctions de manipulation de listes chaînées. Ce projet permet de comprendre le fonctionnement de fonctions fondamentales, de maîtriser la gestion de la mémoire dynamique, et de se doter d'une bibliothèque personnelle réutilisable pour les projets futurs du cursus.

## Instructions
### Compilation
La bibliothèque se compile à l'aide du Makefile fourni à la racine. Les règles standard sont disponibles :
- `make` : Compile le code source et génère l'archive `libft.a` (parties obligatoires).
- `make clean` : Supprime tous les fichiers objets (`.o`).
- `make fclean` : Supprime les fichiers objets ainsi que l'archive `libft.a`.
- `make re` : Nettoie complètement le dépôt et relance une compilation complète de zéro.

### Utilisation
Pour utiliser la bibliothèque dans un autre projet C :
1. Inclure l'en-tête dans vos fichiers sources :
   ```c
   #include "libft.h"

## Lier l'archive lors de la compilation de votre programme :

Bash
cc -Wall -Wextra -Werror main.c libft.a

## Resources
Documentation & Références
Man pages Linux (man 3 pour les fonctions de la libc).

Norme ISO/IEC 9899 (Langage C).

Tutoriels et articles sur la gestion de la mémoire et les listes chaînées en C.

## Detailed Description of the Library
La bibliothèque est structurée en plusieurs blocs fonctionnels :

Partie 1 - Fonctions de la libc : Réimplémentation de fonctions de manipulation de mémoire (memset, bzero, memcpy, memmove, memchr, memcmp, calloc), de chaînes de caractères (strlen, strchr, strrchr, strncmp, strnstr, strlcpy, strlcat, atoi, strdup), et de vérification de caractères (isalpha, isdigit, isalnum, isascii, isprint, toupper, tolower).

Partie 2 - Fonctions additionnelles : Fonctions utilitaires demandées par 42 pour compléter la manipulation de chaînes et d'E/S (ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd).

Partie 3 - Manipulation de listes chaînées : Structures et fonctions permettant de gérer des listes chaînées dynamiques (ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap).

## Utilisation de l'Intelligence Artificielle (AI)
Dans le cadre de ce projet, des outils d'IA ont été utilisés pour :

Comprendre de nouvelles notions (listes chaînées, manipulation de mémoire brut).

Aider à identifier et corriger les problèmes de fonctions externes non autorisées.

Vérifier la conformité des noms de fichiers et des prototypes avec les consignes du sujet.