#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 0
#define MAX 7



int brut(int tab[]){
    int taille = MIN + rand() % (MAX - MIN + 1);
    int i;
    for(i = 0;i < (taille);i++){
        tab[i] = rand() % 2;
    }
    tab[taille] = -1;
    return taille +1;
}


void affiche_brut(int brut[]) {
    for (int i = 0; brut[i] != -1; i++) {
        printf("%d ", brut[i]);
    }
    printf("-1\n");
}

void compress_tab(int tab_brut[],int tab_compress[]){
    int compteur = 1;
    int i;
    int j = 0;
    for(i = 0;i < MAX + 1 ;i++){
        if(tab_brut[i] == tab_brut[i+1]){
            compteur++;
        }
        else{ if(compteur == 1){
                tab_compress[j] = tab_brut[i];
                j++;
            }
            else{tab_compress[j] = compteur;
                j++;
                tab_compress[j] = tab_brut[i - 1];
                j++;
                compteur = 0;
            }
        }
      
    } 
}


int main(){
    srand(time(NULL));
    int tab[MAX +1];
    int tab_comp[MAX+1];
    brut(tab);
    affiche_brut(tab);
    compress_tab(tab,tab_comp);
    affiche_brut(tab_comp);

    return 0;
}
