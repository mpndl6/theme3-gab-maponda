/* ------------------------------
   output.c
   Écriture de données
   ------------------------------------------------------------
*/
#include <stdio.h>

#include "commun.h"
#include <string.h>

int main(void) {
    struct etudiant_s monEtudiant;
    monEtudiant.numero = 42019008;
    monEtudiant.moyenne = 13;

    union bloc_u bloc;
    bloc.etu = monEtudiant;

    for (size_t i = 0; i < sizeof(struct etudiant_s); i++) {
        putchar(bloc.data[i]);
    }
    return 0;

}
