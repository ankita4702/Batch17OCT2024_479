/*
Description:
Q5. Write the logic to for incrementing Squared Number-Star Pattern.
Input Format      : Take N as input of type integer.
Output Format     : Print incrementing Squared Number-Star Pattern.

Constraints:
2<=N<=10
Sample Input:
5
Sample Output:
1*2*3*4*5
6*7*8*9*10
11*12*13*14*15
16*17*18*19*20
21*22*23*24*25
Author:Ankita Aravind Dongrekar
DOC:05/11/2024
version: 0.1v

*/

#include<stdio.h>
int main()
{
	int N;
	int num = 1;
	int i,j;
	
	printf("Enter the value of N: ");
	scanf("%d", &N);

	for(i=1; i<=N; i++)
	{
		for(j=1; j<=N; j++)
		{
			printf("%d", num);
			num++;

			if(j<N)
			{
				printf("*");
			}
		}
		printf("\n\n");
	}
	return 0;
}

