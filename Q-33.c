/*Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>
#include<math.h>

int main(){
  int num , res=0 , rem , org ,n=0 ;
    printf("Enter an integer : ");
    scanf("%d", &num);
    org = num;
    
    while(org != 0){
    	org/= 10;
    	++n;
	}
	
	org = num;

    while (org != 0) {
        rem = org % 10;
        res += pow(rem,n);
        org = org/10;
    }
    if (num == res)
        printf("%d is a Armstrong Number ",num);
    else
        printf("%d is not a Armstrong Number ",num);

    return 0;
}
