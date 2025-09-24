/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.78

Input 2:
5
Output 2:
Approximate sum: 2.84
*/

#include<stdio.h>

int main()
{
	double sum=0.0  ;
	int n , i ;
	
	printf("Enter n term : ");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
        sum += (double) (2*i)/(4*i - 1);
	}
	
	printf("Approximate sum : %.2lf",sum);
	
	return 0;
}
