#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(){
    int t[100];
    int size = 10;
    for (int i = 0; i < size; i++){
        //Version "classique", les size premiers cases de t sont initialisées
        t[i] = rand() % 50;
        printf("t[%d] = %d \n", i, t[i]);

        //Version alternative : size cases  de t choisies au hasard sont initialisées, 
        /*int a = rand() % 100;
        t[a] = rand() % 50;
        printf("t[%d] = %d \n", a, t[a]);*/
    }
    printf("Valeur minimum du tableau : %d\n", mini(t, size));
    printf("Indice du minimum du tableau : %d\n", imini(t, size));
    printf("Valeur maximum du tableau : %d\n", maxi(t, size));
    printf("Indice du maximum du tableau : %d\n", imaxi(t, size));
    printf("Somme des éléments du tableau : %d\n", somme(t, size));
    printf("Moyenne des éléments du tableau : %.2f\n", moyenne(t, size));
    printf("%d valeurs de t comprises entre %d et %d\n", compte(t, size, 36, 43), 36, 43);
    printf("Le tableau est-il trié ? %d\n", est_trie(t, size));
    return 0;
}