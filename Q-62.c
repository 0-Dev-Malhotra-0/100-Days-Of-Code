/*Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1
*/

#include<stdio.h>

int main()
{
	int N , i , j ;
	
	printf("Enter Number : ");
	scanf("%d",&N);
	
	int arr[N];
	int rev_arr[N];
	
	printf("Enter elements : ");
	
	for (i=0 ; i<N ; i++)
		scanf("%d",&arr[i]);

	printf("Array elements are : [ ");
	
	for (i=0 ; i<N ; i++)
		printf("%d ",arr[i]);
	
	printf("]");
	
	printf("\n");
	
	printf("Reversed Array elements are : [ ");	

	for (i=N-1,j=0 ; i<=0,j<N ; i--,j++)
	{
		rev_arr[j] = arr[i] ;
		printf("%d ",rev_arr[j]);
	}
	
	printf("]");
	
	return 0;
}
