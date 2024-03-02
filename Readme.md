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
