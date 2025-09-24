/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include<stdio.h>

int main()
{
	int i , j , n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	if ( n%2 == 0)
	 n += 1;
	 
	 
	for ( i=1 ; i<=n ; i++ ) 
	{
		if(i%2 != 0)
		{
			for (j=1 ; j<=i ; j++)
			 printf("*");
			 
			printf("\n");
		}
	}
	
	for ( i=n-1 ; i>0 ; i-- ) 
	{
		if(i%2 != 0)
		{
			for (j=1 ; j<=i ; j++)
			 printf("*");
			 
			printf("\n");
		}
	}
	
	return 0;
}
