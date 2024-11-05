/*Description:
 Q1. Print series 0,2,5,8,15,35,48,63,80,99
 n=10
Author: Ankita Aravind Dongrekar
DOC:05/11/2024
version: 0.1v

*/

#include<stdio.h>
int main()
{
	int n, itr;
	printf("\n Enter n value: ");
	scanf("%d", &n);

	for(itr=1; itr<n; itr++)
	{
		printf("%d, ",(itr*itr)-1);
	}
	printf("%d", (itr*itr)-1);
	printf("\n");
	return 0;
}
