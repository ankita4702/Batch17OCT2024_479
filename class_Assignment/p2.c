/*
Description:
Q2. Print series 1, 2, 4, 8, 16, 32, 64.
Author: Ankita Aravind Dongrekar
DOC:05/11/2024
version:0.1v

 */

#include<stdio.h>
int main(){
        int n;
        int j;

        printf("\n Enter the value of n: \n");
        scanf("%d",&n);

        for(j=1; j<64; j=j*2)
        {
                printf("%d, ",j);
        }
        printf("%d", j);
        printf("\n");
        return 0;
}
