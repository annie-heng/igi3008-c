#include <stdio.h>
#include <stdlib.h>

int mini(int t[], int size){
    int minimum = t[0];
    for (int i = 1; i < size; i++){
        if (t[i]<minimum){
            minimum = t[i];
        }
    }
    return minimum;
}

int imini(int t[], int size){
    int minimum = t[0];
    int indmini = 0;
    for (int i = 1; i < size; i++){
        if (t[i]<minimum){
            minimum = t[i];
            indmini = i;
        }
    }
    return indmini;
}

int maxi(int t[], int size){
    int maximum = t[0];
    for (int i = 1; i < size; i++){
        if (t[i]>maximum){
            maximum = t[i];
        }
    }
    return maximum;
}

int imaxi(int t[], int size){
    int maximum = t[0];
    int indmaxi = 0;
    for (int i = 1; i < size; i++){
        if (t[i]>maximum){
            maximum = t[i];
            indmaxi = i;
        }
    }
    return indmaxi;
}

int somme(int t[], int size){
    int s = 0;
    for (int i = 0; i< size; i++){
        s+=t[i];
    }
    return s;
}

double moyenne(int t[], int size){
    return (double)somme(t, size)/size;
}

int compte(int t[], int size, int lowest, int highest){
    int count = 0;
    for (int i = 0; i<size; i++){
        if ((lowest<=t[i]) && (t[i]<=highest)){
            count +=1;
        }
    }
    return count;
}

int est_trie(int t[], int size){
    int i = 0;
    while (t[0]==t[size-1-i]){
        i+=1;
    }
    int l = (t[size-1-i]-t[0])/abs(t[size-1-i]-t[0]);
    for (int i = 1; i<size; i++){
        if (l * (t[i]-t[i-1]) < 0){
            return 0;
        }
    }
    return l;
    
}

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