#include <stdio.h>
#include <stdlib.h>

int order_and_display(int* t1, int size1, int* t2, int size2){
    int i = 0;
    int j = 0;
    while (i < size1 && j < size2){
        if (*(t1+i)< *(t2+j)){
            printf("%d, ", *(t1+i));
            i+=1;
        }else{
            printf("%d, ", *(t2+j));
            j+=1;
        }
    }
    for (; i < size1; i++){
        printf("%d, ", *(t1+i));
    }

    for (; j < size2; j++){
        printf("%d, ", *(t2+j));
    }

    return 0;
}

int main(){
    int t1[20];
    int t2[20];
    int size1 = 10 + rand()%10;
    int size2 = 10 + rand()%10;
    t1[0] = rand()%5;
    t2[0] = rand()%5;
    for (int i = 1; i < size1; i++){
        t1[i] = t1[i-1] + rand() % 10;
    }
    for (int i = 1; i < size2; i++){
        t2[i] = t2[i-1] + rand() % 10;
    }

    printf("Tableau t1 : ");
    for (int i = 0; i < size1-1; i++){
        printf("%d, ", t1[i]);
    }
    printf("%d\n", t1[size1-1]);

    printf("Tableau t2 : ");
    for (int i = 0; i < size2-1; i++){
        printf("%d, ", t2[i]);
    }
    printf("%d\n", t2[size2-1]);
    printf("Valeurs ordonnées :\n");
    order_and_display(t1, size1, t2, size2);
    printf("\n");


}