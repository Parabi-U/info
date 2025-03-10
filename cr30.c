#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 0
#define MAX 5


int taille(){
    int tab[MIN + rand()% (MAX -MIN + 1)];
    int i;
    for(i = 0;i < (MAX - MIN);i++){
        tab[i] = rand() % 2;
    }
    return (MAX-MIN);
}


int main(){
    return 0;
}