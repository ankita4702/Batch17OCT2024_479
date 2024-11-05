/*
 Description:
 Q4 Print the star pattern given input:n=5
    output:
    *
    ** 
    ***
    ****
    *****
 Author:Ankita Aravind Dongrekar
 DOC:05/11/2024
 version: 0.1 v

 */

#include <stdio.h>
int main()
{
	int n = 5;
	int i,j;

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n\n");
	}
	return 0;
}

