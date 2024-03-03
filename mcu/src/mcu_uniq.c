#include <stdio.h>
#include "mcu_fatal.h"
#include "mcu_readl.h"

void copier(char cible[], char source[]) {
    int c;
    int i = 0;
    while ((c = source[i]) != '\0') {
        cible[i] = c;
        i++;
    }
    cible[i+1] = '\0';
}
/* Si la cible à une taille trop courte pour contenir la taille du tableau alors elle écrira des données en mémoire
 * en dehors du tableau ce qui peut poser problème. C'est pour ça que l'on voudra s'assurer que la cible puisse contenir
 * les valeurs de source
 * */

int comparer(char chaine1[], char chaine2[]) {
    int c1, c2;
    int i = 0;
    while ((c1 = chaine1[i]) != '\0' && (c2 = chaine2[i]) != '\0') {
        if (c1 != c2) return 1;
        i++;
    }
    return 0;
} // la fonction retourne 0 si tout s'est bien passée contrairement en td ou elle retournait 1 si ça s'était mal passé

