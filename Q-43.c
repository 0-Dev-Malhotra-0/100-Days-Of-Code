/*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number
*/

#include<stdio.h>

int main()
{
	int n , org , d , i , fac=1 , sum=0 ;
	printf("Enter number : ");
	scanf("%d",&n);
	
	org = n;
	while(n > 0)
	{
		d = n%10;
		for(i=1 ; i<=d ; i++)
		{
			fac *= i;	
		}
		sum += fac;
		n /= 10;
		fac = 1;
	}
	
	if(org == sum)
	 printf("Strong Number");
	else
	 printf("Not Strong Number");
	  
	return 0; 
}
