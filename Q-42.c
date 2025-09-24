/*Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number
*/

#include<stdio.h>

int main()
{
	int n , i ,sum=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for( i=1 ; i<n ; i++)
	{
		if(n % i == 0)
		 sum += i;
	}
	
	printf("Sum of proper divisors : %d\n",sum);
	
	if (n == sum)
	 printf("Perfect Number");
	else
	 printf("Not Perfect Number");
	return 0;
}
