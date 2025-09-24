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

#include<stdio.h>

int main()
{
	int size ;
	
	printf("Enter the bit of binary number : ");
	scanf("%d",&size);
	
	char binary[size + 1] ,  flip[size + 1];
	int i , error = 0;
	
	printf("Enter a %d bit binary number : ",size);
	scanf("%s",&binary);
	
	for(i=0 ; i<size ; i++)
	{
		if(binary[i] == '1')
            flip[i] = '0';
        else if(binary[i] == '0')
            flip[i] = '1';
        else
        {
		 printf("Invalid Input");
         error = 1;
         break;
        }
   }
   
   flip[size] = '\0';
   
   if (error != 1)
   { 
        printf("Original binary : %s\n", binary);
        printf("1's complement  : %s", flip);
    }
    
    return 0;
}
