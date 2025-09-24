/*Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/

#include<stdio.h>

int main()
{
	int n1 , n2 , i , gcd , lcm;
	printf("Enter Number 1 : ");
	scanf("%d",&n1);
	printf("Enter Number 2 : ");
	scanf("%d",&n2);
	
	for( i=1 ; i <= n1 && i <= n2; ++i)
	{
		if(n1 % i == 0 && n2 % i ==0)
		 gcd = i;
	}
	
	printf("HCF is %d\n",gcd);
	lcm = (n1*n2)/gcd;
	printf("LCM is %d",lcm);
	
	return 0;
}
