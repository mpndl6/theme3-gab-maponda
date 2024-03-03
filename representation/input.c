/* ------------------------------
   input.c
   Lecture de données
   ------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include "commun.h"


int main(void) {
    union bloc_u uni;
    struct etudiant_s monEtudiant;
    monEtudiant.numero = 2;
    monEtudiant.moyenne = 2;
    uni.etu = monEtudiant;

    for (int i=0; i<sizeof(struct etudiant_s); i++){
        uni.data[i] = getchar();
        printf("%d %f\n", uni.etu.numero, uni.etu.moyenne);
    }
}
