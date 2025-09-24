/*Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10
*/

#include <stdio.h>

int main() 
{
    int n , i , Max , Min;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter %d elements : ", n);
 
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
 
	Max = arr[0];
 	
 	Min = arr[0];
 	 
 	printf("Array elements are : ");
 	
    for (i = 0; i < n; i++) 
    {
    	printf("%d ", arr[i]);
        
        if (Max < arr[i])
         Max = arr[i];
         
        if (Min > arr[i])
         Min = arr[i];
	}
	
    printf("\n");
    
    printf("Max=%d , Min=%d",Max,Min);

    return 0;
}
