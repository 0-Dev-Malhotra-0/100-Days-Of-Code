/*Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1
*/

#include<stdio.h>

int main()
{
	int N , i , p=0 , n=0 , z=0;
	
	printf("Enter Number : ");
	scanf("%d",&N);
	
	int arr[N];
	
	printf("Enter elements : ");
	
	for (i=0 ; i<N ; i++)
	 scanf("%d",&arr[i]);
	 
	printf("Array elements are : ");
	
	for (i=0 ; i<N ; i++)
	{
		printf("%d ",arr[i]);
		
		if (arr[i] > 0)
		 p++;
		 
		else if (arr[i] < 0)
		 n++;
		 
		else
		 z++;
	}
	
	printf("\n");
	
	printf("Positive=%d , Negative=%d , Zero=%d",p,n,z);
	
	return 0;
}
