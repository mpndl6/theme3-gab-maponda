#include <stdio.h>

int nbr_lignes_lues(){
    int cpt=0;
    for(int i=0;;i++){
        char c= getchar();
        if(c=='\n'){
            cpt++;
        }
        if(c==EOF){
            return cpt;
        }
    
    }
}

int main(){
    printf("nombre de lignes lues: %d\n",nbr_lignes_lues());
    return 0;
}