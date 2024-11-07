/* Description:
A4.rotate array every kth element
1 2 3 4 5 6 7 8 9
k= 3
3 2 1 6 5 4 9 8 7

Author:Ankita Aravind Dongrekar

DOC:07/11/2024

Version: 0.1v

*/
#include <stdio.h>
void rotate(int arr[],int n,int k);
void rev(int arr[], int start, int end);
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int i;
    
   rotate(arr,n,k);
    
    printf("\nResultant array is: ");
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }

    return 0;
}

void rev(int arr[], int start, int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
        
}

void rotate(int arr[], int n, int k)
{
    int i, end;
    for(i=0; i<n; i+=k)
    {
        end = (i+k-1<n)? i + k-1:n-1;
        rev(arr, i, end);
    }
}
