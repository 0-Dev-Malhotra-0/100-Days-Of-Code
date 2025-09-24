/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene
*/

#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter first side of the triangle : ");
	scanf("%d",&a);
	printf("Enter second side of the triangle : ");
	scanf("%d",&b);
	printf("Enter third side of the triangle : ");
	scanf("%d",&c);
	if( a+b>c && a+c>b && b+c>a )
	{
		printf("\nThe triangle is valid.\nType of ");
		if ( a==b && b!=c || a==c && b!=c || b==c && a!=c )
		{
			printf("the triangle is isosceles triangle.\n");
		}
		else if ( a==b && b==c)
		{
		    printf("the triangle is equilateral triangle.\n");
		}
		else if ( a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b )
		{
			printf("the triangle is right angled triangle.\n");
		}
		else
		{
			printf("the triangle is scalene triangle.\n");
		}
	}
	else
	{
	printf("\nThe triangle is not valid.\n");
	}
	return 0;
}
