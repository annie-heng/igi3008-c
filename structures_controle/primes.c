#include <stdio.h>
#include <math.h>

int isprime(int p){
    if (p!=2 && p%2==0){
        return 0;
    }
    int limit = (int)sqrt((double)p);
    for (int i=3; i<limit+1; i+=2){
        if (p%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n = 1000000;
    int prime_count = 0;
    for (int i = 2; i<n+1; i++){
        if (isprime(i)){
            prime_count+=1;
        }
    }
    printf("Il y a %d nombres premiers entre 0 et %d \n", prime_count, n);
    return 0;
}