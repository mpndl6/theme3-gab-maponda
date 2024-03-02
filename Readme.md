## Bases de la Programmation en C. Thème 3.

Ce dépôt correspond au 3e thème de BPC, semaines 5 et 6, dont le sujet est à https://www.fil.univ-lille.fr/~ballabriga/bpc/tdtp/tp_theme3.html

###  Instructions pour rendre votre travail avec gitlab

TP 
Gabrielle Maponda 
Annie-Neilla Kobako

Voyez les instructions précises dans le sujet de TP. 

### Contenu de ce dépôt

 * Dossier mcu/ correspondant au travail de la première semaine sur "Mes Commandes Unix"
 * Dossier representation/ correspondant au travail de la deuxieme semaine, sur la représentation en suite d'octets des structures
 
##### Exercice 1 
```
#define SIZE 12
int tsrc [SIZE] , tdest [SIZE];


- for (int i=0; i < SIZE; i++)
    tdest[i] = tdsrc[i]
```

```
int index = 0;

    for (int i = 0; i < SIZE; i++) {
      if (tsrc[i] > 0) {
        tdst[index++] = tsrc[i];
              }
        }

   for (; index < SIZE; index++) {
   tdst[index] = 0;
   }
```
le index va servir à pourvoir se situé dans le tableau.

