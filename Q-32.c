/*Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/

#include <stdio.h>

int main(){
  int num, rev=0, rem, org;
    printf("Enter an integer : ");
    scanf("%d", &num);
    org = num;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
    }
    if (org == rev)
        printf("%d is a Palindrome Number ", org);
    else
        printf("%d is not a Palindrome Number ", org);

    return 0;
}
