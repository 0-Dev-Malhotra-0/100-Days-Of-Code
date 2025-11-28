/*Q65: Search in a sorted array using linear search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/

#include<stdio.h>

int main()
{
	int n, i, j, temp=0, m=0, pos, flag=0;
	
	// Enter length
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	
	int arr[n+1];
	
	// Input Element
	printf("Enter elements : ");
	
	for(i = 0 ; i < n ; i++)
		scanf("%d",&arr[i]);
	
	// Print Element
	printf("Elements are : [ ");
	
	for(i = 0 ; i < n ; i++)
		printf("%d ",arr[i]);
	
	printf("]");
	
	// Sort Element
	for(i = 0 ; i < n-1 ; i++)
	{
		for(j = 0 ; j < n-i-1 ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}	
	}
	
	printf("\n");
	
	// Print Sorted Element
	printf("Sorted elements are : [ ");
	
	for(i = 0 ; i < n ; i++)
		printf("%d ",arr[i]);
	
	printf("]");
	
	printf("\n");
	
	// Enter Element To Search
	printf("Enter element to search : ");
	scanf("%d",&m);
	
	// Assume Element Position At last
	pos = n; 
	
	// Check For Right Position & Printing
    for (i = 0 ; i < n ; i++)
    {
        if (arr[i] == m)
        {
            pos = i;
            printf("Element found at %d index",pos);
            printf("\n")
            flag = 1;
        }
    }
    
    if(flag = 0)
		printf("Not found");
	
	return 0;
}
