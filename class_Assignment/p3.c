/*
Description:
Q3. Find  the  sum  of  series  1+4-9+16-25+36
Author: Ankita Aravind Dongrekar
DOC: 05/11/2024
version: 0.1 v
*/

#include <stdio.h>
int main()
{
        int n = 6;
        int sum = 0;
        int i,term;

        for(i=1; i<=n; i++)
        {
                term = i*i;

                if(i%2==0)
                {
                        sum += term;
                }
                else
                        sum -= term;
        }
        printf("Sum of the series 1+4-9+16-25+36 is: %d\n", sum);
        return 0;
}

