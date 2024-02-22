#include <stdio.h>
#include <stdlib.h>
#include <mcu_fatal.h>
#include <mcu_macros.h>

#define MAXLINE 1024

int readl(char line[]) {
    int i = 0;
    while(1) {
        fatal(i == MAXLINE - 1, "Erreur: ligne trop longue \n", -1);
        char c = getchar();
        
        if (c == '\n' || c == EOF) {
            line[i] = '\0';
            return (c == EOF) ? EOF : i;
        }
        
        line[i++] = c;
    }
}

void copier(char cible[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        cible[i] = source[i];
        i++;
    }
    cible[i] = '\0';
}

int comparer(char chaine1[], char chaine2[]) {
    for (int i = 0; chaine1[i] != '\0'; i++) {
        if (chaine1[i] != chaine2[i]) {
            return 1; 
        }
    }
    return 0; 
}


int main() {
    char chaine1[MAXLINE];
    char chaine2[MAXLINE];
    
    printf("Entrez la première chaîne : ");
    readl(chaine1);

    printf("Entrez la deuxième chaîne : ");
    readl(chaine2);
    
    if (comparer(chaine1, chaine2) == 0) {
        printf("Les deux chaînes sont identiques.\n");
    } else {
        printf("Les deux chaînes sont différentes.\n");
    }
    
    return 0;
}
