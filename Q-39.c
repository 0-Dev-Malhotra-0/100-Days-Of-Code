/*Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/

#include<stdio.h>

int main()
{
	int num , org_num , prod=1 , rem;
	printf("Enter Number : ");
	scanf("%d",&num);
	
	org_num = num;
	
	while(num != 0)
	{
		rem = num%10;
		if (rem%2 != 0)
		 prod *= rem;
		else 
		 prod = prod; 
		num = num/10;
	}
	
	printf("Product of odd digits of %d is %d",org_num,prod);
	
	return 0;
}
