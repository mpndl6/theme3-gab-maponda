void new(char tab[]){
    int l=0;
    for(;tab[l]!='';l++);
    for(int i=l; i>=0;i--){
        tab[i]=tab[l-1-i];
        tab[l-1-i]=tab[i];
    }
}