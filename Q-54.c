/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.
*/

#include<stdio.h>

int main()
{
	int n , i , j , k;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=1 ; i<n ; i++)
	{
		for(j=0 ; j<=n-i ; j++)
		 printf(" ");
		
		for(k=0 ; k<i ; k++)
		 printf("* ");
		  
		printf("\n");
	}
	
	for(i=1 ; i<=n ; i++)
	{
		for(j=1 ; j<=i ; j++)
		 printf(" ");
		 
		for(k=0 ; k<=n-i ; k++)
		 printf("* ");
		
		printf("\n");
	}
	
	return 0;
}
