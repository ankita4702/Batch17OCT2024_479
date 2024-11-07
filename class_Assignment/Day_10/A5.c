/* Description:
A5. Write a c program to print alphabet triangle.
Input: 5
Output:
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA

     1
    121
   12321
  1234321
 123454321

Author: Ankita Aravind Dongrekar 

DOC:07/11/2024

version: 0.1v

*/

#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%c", 'A'+j - 1);
        }
        for(j=i-1; j>=1; j--){
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }

    return 0;
}
