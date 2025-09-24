/*Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/

#include<stdio.h>

int main()
{
	int Num , temp , L_D ,  N=0 , i , j ;
	int maxDigit , maxCount , count ;
	
	printf("Enter Number : ");
	scanf("%d",&Num);
	
	temp = Num;
	
	while (temp > 0)
	{
		temp = temp/10;
		N++ ;
	}
	
	int Arr[N];

	for (i=N-1 ; i>=0 ; i--)
	{
		L_D = Num % 10;
		Arr[i] = L_D;	
		Num = Num/10;
	}
	
	maxDigit = Arr[0];
    maxCount = 1;

    for (i=0 ; i<N ; i++)
    {
        count = 1;
        
        for (j=i+1 ; j<N ; j++)
        {
            if (Arr[i] == Arr[j])
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxDigit = Arr[i];
        }
    }

    printf("Digit that occurs most : %d (occurs %d times)", maxDigit, maxCount);

	return 0 ;
}

