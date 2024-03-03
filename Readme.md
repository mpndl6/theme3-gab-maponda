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
 * Dossier src/obj contenant les fichiers objets ignorés par le .gitignore
 * Après génération des fichiers objets, la commande ```make move ``` déplcara ces fichiers vers ce repectoire.
 * Les commandes s'effectue dans le repectoire mcu/.
 * La mention ``` ./mcu``` indique le chemin absolu vers ce repectoire

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

##### Exercice 5

On crée les fichers sources mcu_wl et mcu_wc qui implémentent ces deux fonctions.
Ensuite dans le Makefile nous ajoutons les commandes nécéssaire au fichiers exécutables en inculant les dépendances nécéssaires.

```
./mcu/$ make mcu_wl

gcc -ansi -Wall -pedantic   -c -o src/mcu_wl.o src/mcu_wl.c
gcc -ansi -Wall -pedantic src/mcu_wl.o -o build/mcu_wl
```
On exécute la commande comme dans l'exercice :

```
./mcu/$ echo "Hello\nUnix\nWorld" | ./build/mcu_wl
3
```

Ensuite nous faisons pareil avec le fichier mcu_wc.

```
./mcu/$ echo 'Hello Unix World!' | ./build/mcu_wc
18
```

##### Exercice 6
La fonction est dépendante de la fonction readl donc dans les commandes makefile on fait attention de mettre les dépendances nécéssaires.
après avoir crée l'exécutable à l'aide la commande ``` make mcu_rev```, nous testons l'exemple comme dans l'exercice :
```
./mcu/$ echo "Hello World" > essai
./mcu/$  echo "Hello Unix World!" >> essai

./mcu/$ ./build/mcu_rev < essai            

dlroW olleH

!dlroW xinU olleH
```

##### Exercice 7

```
./mcu/ ./build/mcu_uniq < essai
Hello World
Hello World
Hello World
Hello World
Hello World
```

## Structures 

Dans cette partie les commandes s'effectuent dans le repectoire /representation
``` ./repre/ ``` représentera le chemin absolu vers celui-ci.

##### Exercice 8

```
./repre/$ gcc exo8.c -o exo8
./repre/$ ./exo8
DCBA%  
```
Cela affiche les octect de 0x41424344 à l'envers car data et val sont dans une union et donc partagent la même place en mémoire.
Et étant donné que l'on se situe sur une machine Little eidian le premier bit stocker et le bit de poid faible de val.

```
./repre/$ ./exo8 > data.bin
./repre/$ xxd data.bin 
00000000: 4443 4241 
```
On observe ce que ça donne en hexa.
Le fichier est lisible à l'oeil nu.

###### Exercice 9

```
./repre/$ gcc output.c -o output
./repre /$  ./output > etudiant.bin
```
Le fichier est illisible à l'oeil nu.

```
./repre/$ hexdump etudiant.bin
0000000 28c0 0281 0000 4150                    
0000008
```
Je ne retrouve pas des octects qui représente mon numéro etudiant.

##### Exercice 10

```
./repre/$ make input 
gcc --ansi -Wall -pedantic obj/input.o -o input
./repre/$ make output 
gcc --ansi -Wall -pedantic output.o -o output
./repre/$ make test
./output > etudiant.bin
./input < etudiant.bin
192 2.000000
10432 2.000000
8464576 2.000000
42019008 2.000000
42019008 2.000000
42019008 2.000000
42019008 3.250000
42019008 13.000000
hexdump ./data.bin
0000000 4344 4142                              
0000004
```
Je ne comprends pas bien ces données.

