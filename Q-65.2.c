/*Q65: Search in a sorted array using binary search.

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
	int n, i, j, temp, m, flag=0;
	
	// Enter length
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	
	int arr[n+1];
	int left=0, right=n-1, mid;
	
	// Input Element
	printf("Enter elements : ");
	
	for(i = 0 ; i < n ; i++)
		scanf("%d",&arr[i]);
	
	// Print Array
	printf("Elements are : [ ");
	
	for(i = 0 ; i < n ; i++)
		printf("%d ",arr[i]);
	
	printf("]");
	
	// Sort Array
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
	
	// Print Sorted Array
	printf("Sorted elements are : [ ");
	
	for(i = 0 ; i < n ; i++)
		printf("%d ",arr[i]);
	
	printf("]");
	
	printf("\n");
	
	// Enter Element To Search
	printf("Enter element to search : ");
	scanf("%d",&m);
	
	// Binary search
    while (left <= right) 
	{
        mid = (left + right) / 2;
        
        if (arr[mid] == m) 
		{
            printf("Found at index %d", mid);
            flag = 1;
            break;
        }
        
        else if (arr[mid] < m)
            left = mid + 1;
            
        else
            right = mid - 1;
    }
    
    if (flag == 0)
        printf("Not found");
	
	return 0;
}
