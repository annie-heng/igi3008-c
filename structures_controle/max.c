#include <stdio.h>

int max3(int a, int b){
    return (a>=b) ? a : b;
}

int main(){
    printf("Maximum entre %d et %d : %d \n", 5, 18, max3(5,18));
    return 0;
}

