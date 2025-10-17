#include <stdio.h>

void sumult(int* pA, int* pB, int* pSomme, int* pProduit){
    *pSomme = *pA + *pB;
    *pProduit = (*pA) * (*pB);
}

int main(){
    int a = 3;
    int b = 4;
    int somme;
    int produit;
    sumult(&a, &b, &somme, &produit);
    printf("%d + %d = %d\n", a, b, somme);
    printf("%d x %d = %d\n", a, b, produit);
    return 0;
}