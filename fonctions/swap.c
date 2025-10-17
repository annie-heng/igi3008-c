// swap1.c

#include <stdio.h>

void swap1(int x, int y)
{
    int tmp = 0;
    tmp = x;
    x = y;
    y = tmp;
}

void swap2(int *x, int *y)
{
    int tmp=0;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int a = 1;
    int b = 2;

    printf("Avec la fonction swap1 : \n");
    printf("AVANT : a = %d, b = %d\n", a, b);
    swap1(a, b);
    printf("APRES : a = %d, b = %d\n", a, b);

    a = 1;
    b = 2;

    printf("\nAvec la fonction swap2 : \n");
    printf("AVANT : a = %d, b = %d\n", a, b);
    swap2(&a, &b);
    printf("APRES : a = %d, b = %d\n", a, b);
    return 0;
}

/*La fonction ne retourne pas le résultat attendu car on lui 
fournit en paramètre la VALEUR de a et la VALEUR de b, affectées
respectivement à x et à y, mais pas leurs adresses, rendant 
impossibles toute modification dans la mémoire. x et y sont des 
variables locales à swap1 et n'ont  donc pas de lien avec les 
variables a et b de main. 
*/