/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/

#include<stdio.h>

int main()
{
	int N , n , i , j , B ;
	
	printf("Enter Number : ");
	scanf("%d",&N);
	
	int arr1[N];
	
// Input of Array 1

	printf("Enter elements : ");
	
	for (i=0 ; i<N ; i++)
		scanf("%d",&arr1[i]);

	printf("Array 1 elements are : [ ");
	
	for (i=0 ; i<N ; i++)
		printf("%d ",arr1[i]);
	
	printf("]");
	
	printf("\n");

// Input of Array 2

	printf("Enter Number : ");
	scanf("%d",&n);
	
	int arr2[n];
	
	printf("Enter elements : ");
	
	for (i=0 ; i<n ; i++)
		scanf("%d",&arr2[i]);
	
	printf("Array 2 elements are : [ ");	

	for (i=0 ; i<n ; i++)
	{
		printf("%d ",arr2[i]);
	}
	
	printf("]");
	
	printf("\n");
	
// Size of both combined
	B = N+n;
	 
	int Arr[B];
	
// Printing and joining both arrays

	for (i=0; i<N; i++)
        Arr[i] = arr1[i];
    
    for (j=0; j<n; j++)
        Arr[N+j] = arr2[j];
    
    printf("Array elements after joining : [ ");
    
    for (i=0; i<B; i++)
        printf("%d ",Arr[i]);
        
    printf("]");
	
	return 0;
}
