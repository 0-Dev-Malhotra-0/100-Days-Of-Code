/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/

#include<stdio.h>

int main()
{
	double a , b , c=0 ;
	char operator;
	printf("Enter first number : ");
	scanf("%lf",&a);
	printf("Enter second number : ");
	scanf("%lf",&b);
	printf("Enter an operator (+,-,*,/,%%) : ");
	scanf(" %c",&operator);
	switch(operator)
	{
		case '+':
			c = a + b;
			printf("%.lf",c);
			break;
		case '-':
			c = a - b;
			printf("%.lf",c);
			break;
		case '*':
			c = a * b;
			printf("%.wlf",c);
			break;
		case '/':
			if(b != 0)
			{
			 c = a / b;
			 printf("%.2lf",c);
		    }
            else
            {
             printf("Cannot divide by zero");
            }
            break;
		case '%':
			if(b != 0)
			{
				c = (int)a % (int)b;
			    printf("%.2lf",c);	
			}
			else
			{
			 printf("Cannot divide by zero");
		    }
		    break;
		default:
		    printf("It is a basic calculator please enter (+,-,*,/,%%) only to be calculated.");		
	}
	return 0;
}
