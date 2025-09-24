/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ?5/unit 
Next 100 units at ?7/unit 
Next 100 units at ?10/unit 
Above at ?12/unit

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ?250

Input 2:
150
Output 2:
Bill: ?850

Input 3:
250
Output 3:
Bill: ?1700
*/

#include<stdio.h>

int main()
{
	int units , bill=0;
	printf("Enter the units consumed  : ");
	scanf("%d",&units);
	if(units <= 0)
		printf("No bill");
	
	else if(units <= 100)
	{
		bill = (5*units);
		printf("Bill ?%d",bill);
	}
	else if(units <= 200 )
	{
		bill = (5*100) + (7*(units-100));
		printf("Bill ?%d",bill);
	}
	else if(units <= 300 )
	{
		bill = (5*100) + (7*100) + (10*(units-200));
		printf("Bill ?%d",bill);
	}
	else
	{
		bill = (5*100) + (7*100) + (10*100) + (12*(units-300));
		printf("Bill ?%d",bill);
    }	
    return 0;
}
