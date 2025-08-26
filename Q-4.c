/* Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include<stdio.h>

int main() 
{
 int r;
 float a=0, c=0;
 printf("Enter radius : ") ;
 scanf("%d", &r) ;
 a= 3.14159265359*r*r;
 c= 2*3.14159265359*r;
 printf("Area : %.2f\n", a) ;
 printf("Circumference : %.2f\n", c) ;
 return 0;
} 
