/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/

#include<stdio.h>

int main()
{
  int a, b, s=0, d=0, p=0, q=0;
  printf("Enter two numbers : ");
  scanf("%d %d",&a,&b);
  s= a+b;
  d= a-b;
  p= a*b;
  q= a/b;
  printf("The sum of the numbers is : %d\n", s) ;
  printf("The difference of the numbers is : %d\n", d) ;
  printf("The product of the numbers is : %d\n", p) ;
  printf("The quotient of the numbers is : %d\n", q) ;
  return 0;
}