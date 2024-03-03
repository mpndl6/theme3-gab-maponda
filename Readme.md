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
      if (tdsrc[i] > 0) {
        tdst[index++] = tdsrc[i];
              }
        }

   for (; index < SIZE; index++) {
   tdst[index] = 0;
   }
```
le index va servir à pourvoir se situé dans le tableau.

##### Exercice 2 

- Prototype d'une fonction donc la déclaration de la fonction avec son nom, 
son type de retour et ses paramètres, sans inclure le corps de la fonction.

on aurait par exemple: 
void copie_tab(char tdst[], char tdsrc[]);

- Donner un corps à la fonction : 
```
  void copie_tab(char tdst[], char tdsrc[]){
        for (int i=0; i < SIZE; i++){
            if (tdsrc[i] == '0')
                break
            tdest[i] = tdsrc[i]
    }
```

##### Exercice 4

On ajoute d'abord les commandes nécéssaires pour crée les fichiers 
objets (.o) qui vont nous servir.

mcu_test.c utilise les fonctions putchar etc. On voudrait ajouter un fichier putint.c qui regroupe les fonctions nécéssaires
utilisaient au thème précédent.

Après avoir définit toutes les règles nécéssaires  et crée les dépendances utiles à mcu_test, nous pouvons réaliser un make all.

```
./mcu/$ make all
gcc -ansi -Wall -pedantic src/obj/mcu_test.o src/obj/mcu_putint.o src/obj/mcu_readl.o src/obj/mcu_fatal.o -o build/mcu_test


./mcu/$ ./build/mcu_test < src/mcu_test.c; echo "le code de retour est $?" 
#include <stdio.h>

19
1==0 is not true
le code de retour est 2
```
