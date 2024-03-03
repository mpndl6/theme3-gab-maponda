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

