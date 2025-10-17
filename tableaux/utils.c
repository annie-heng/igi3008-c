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