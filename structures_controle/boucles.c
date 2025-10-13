#include <stdio.h>

int main(){
    printf("Boucle utilisant break \n");
    for(int i = 0; i<10; i++){
        if (i==5){
            printf("Arrêt du programme pour i = %d \n", i);
            break;
        }
        printf("i = %d \n", i);
    }
    printf("Boucle utilisant continue \n");
    for(int i = 0; i<10; i++){
        if (i==5){
            printf("Itération non complétée pour i = %d \n", i);
            continue;
        }
        printf("i = %d \n", i);
    }
}