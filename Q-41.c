/*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>

int main()
{
    int num, firstDigit, lastDigit, temp, divisor = 1, middlePart, swappedNum;

    printf("Enter a number : ");
    scanf("%d", &num);

    temp = num;
    lastDigit = num % 10;   
    
    while (temp > 9) 
	{
        temp /= 10;
        divisor *= 10;
    }
    
    firstDigit = temp;
    
    middlePart = (num % divisor) / 10;
    
	swappedNum = lastDigit * divisor + middlePart * 10 + firstDigit;
	
	printf("Number after swapping first and last digit : %d", swappedNum);

    return 0;
}

