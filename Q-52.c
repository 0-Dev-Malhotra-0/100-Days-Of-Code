/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.
*/

#include <stdio.h>

int main() 
{
	int num , i , j=0 , n ;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	int blocks[n] ;
	
	if(n%2 == 0)
	 n +=1;
	
	for ( i = 1 ; i <= n ; i++)
	{
		if( i%2 != 0)
		{
			blocks[j] = i;
			j++;
		}
	}
	
	for ( i = n-1 ; i > 0 ; i--)
	{
		if( i%2 != 0)
		{
			blocks[j] = i;
			j++;
		}
	}
	
    num = j;		// "num = sizeof(blocks)/sizeof(blocks[0])" can also be used

    for ( i = 0 ; i < num ; i++) 
	{
        for (j = 0 ; j < blocks[i] ; j++) 
            printf("*\n");
            
        if (i != num - 1)
            printf("\n");
    }
	
    return 0;
}



