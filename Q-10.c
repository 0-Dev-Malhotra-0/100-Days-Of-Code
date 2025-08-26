/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include<stdio.h>

int main()
{
	int t_s,s=0,h=0,m=0;
	printf("Enter time in seconds : ");
	scanf("%d",&t_s);
	h = t_s/3600;
	m = (t_s%3600)/60;
	s = t_s%60;
	printf("Hours : %d\nMinutes : %d\nSeconds : %d",h,m,s);
}
