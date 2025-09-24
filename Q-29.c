/*Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6
*/

#include<stdio.h>

int main()
{
	int n , i=1 , fac=1 ;
	printf("Enter number : ");
	scanf("%d",&n);
	
	for( i ; i<=n ; i++ )
	{
		fac *= i;
	}	
	printf("%d",fac);
	
	return 0; 
}
