/*Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/

#include <stdio.h>

int main()
{
    int num, temp, l_d, comp = 0, place = 1, digits = 0, result_digits = 0 , i ;

    printf("Enter binary number : ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0)
    {
        l_d = temp % 10;
        
        if (l_d == 0)
            comp += 1 * place; 

        place *= 10;
        
        temp /= 10;
    }

    temp = comp;
    
    while (temp > 0)
    {
        result_digits++;
        temp /= 10;
    }

    printf("1's complement : ");
    
    for (i = 0 ; i < digits - result_digits ; i++)
        printf("0");

    printf("%d", comp);

    return 0;
}
