/*Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1
*/


#include<stdio.h>

int main()
{
	int N , i , e ;
	
	printf("Enter Number : ");
	scanf("%d",&N);
	
	int arr[N];
	
	printf("Enter elements : ");
	
	for (i=0 ; i<N ; i++)
	 scanf("%d",&arr[i]);

	printf("Array elements are : [");
	
	for (i=0 ; i<N ; i++)
		printf("%d ",arr[i]);
	
	printf("\b]");
	
	printf("\n");
	
	printf("Enter element to search : ");
	scanf("%d",&e);
	
	for (i=0 ; i<N ; i++)
	{
		if (arr[i] == e)
		{
			printf("Found at index %d",i);
		 	printf("\n");
		}
	}
	
	return 0;
}
