/*Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/

#include<stdio.h>

int main()
{
	int n, i, j, temp=0, m=0, pos;
	char cnt='Y';
	
	// Enter length
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	
	int arr[100];
	
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
	
	// Inserting Element Till The User Wants
	while(cnt == 'Y' || cnt == 'y')
	{
		// Enter Element To Add
		printf("Enter element to add : ");
		scanf("%d",&m);
		
		// Assume Element Position At Last
		pos = n; 
		
		// Check For Right Position
	    for (i = 0 ; i < n ; i++)
	    {
	        if (arr[i] > m)
	        {
	            pos = i;
	            break;
	        }
	    }
		
		// Shift Element From That Position
	    for (i = n; i > pos; i--)
	        arr[i] = arr[i-1];
		
		// Add Element To The Position
	    arr[pos] = m;
	    n++;
	
		printf("Do you want to add more Y/N : ");
		scanf(" %c",&cnt);    
	}
	
	// Print After Adding New Element
	printf("After adding elements are : [ ");
	
	for(i = 0 ; i < n ; i++)
		printf("%d ",arr[i]);
	
	printf("]");
	
	return 0;
}
