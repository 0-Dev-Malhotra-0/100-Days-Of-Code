/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345
*/

#include<stdio.h>

int main()
{
	int i , j , n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++)
	{
		for(j=1 ; j<n-i ; j++)
		 printf("  ");
		 
		for(j=0 ; j<=i ; j++)
		 printf("%d ",n-i+j);
		
		printf("\n");
	}
	
	return 0;
}
