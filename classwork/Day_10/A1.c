/* Description:
A1. Check whether a given number can be expressed as the sum of two prime number
Author: Ankita Aravind Dongrekar
DOC:07/11/2024
version: 0.1v
*/

#include <stdio.h>

int isPrime(int num){
    int i;
    if(num <= 1)
    return 0;
    for(i=2; i*i <= num; i++){
        if(num%i == 0)
        return 0;
    }
    return 1;
}

int main() {
    int n, i;
    int count = 0;
    printf("\nEnter a positive integer:");
    scanf("%d", &n);
    
    for(i=2; i<=n/2; i++){
        if(isPrime(i) && isPrime(n-i)) {
            printf("%d = %d + %d\n", n,i,n-i);
            count++;
        }
    }
    
    if(count > 0)
    printf("Nofways = %d\n", count);
    else
    printf("Noofways = -1\n");
    
    return 0;
}