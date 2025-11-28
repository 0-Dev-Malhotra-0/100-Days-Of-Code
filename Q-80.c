/*Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

// Input Matrix :

void matrix(int r , int c , int matrix[r][c]) 
{
    int i, j ;
	
	printf("\n");
	
    printf("Enter elements of %dx%d matrix: \n",r,c);
    
    for(i = 0 ; i < r ; i++) 
	{
        for(j = 0 ; j < c ; j++) 
		{
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Printing Matix :

void display_matrix(int r , int c , int matrix[r][c])
{
	int i , j;
	
	printf("\nMatrix is : \n");
	for(i = 0 ; i < r ; i++)
	{
		for(j=0 ; j < c ; j++)
		{
			printf("%d\t",matrix[i][j]);	
		}
		
		printf("\n");	
	}
}

// Multiplying Matrix :

void Multiplication(int r1 , int c1 , int r2 , int c2 ,int A[r1][c1] , int B[r2][c2])
{
	int i , j , k ;
	int result[r1][c2] ;
	
	for (i = 0 ; i < r1 ; i++) 
	{
        for (j = 0 ; j < c2 ; j++) 
            result[i][j] = 0 ;
	}
	
    for (i = 0 ; i < r1; i++) 
	{
        for (j = 0 ; j < c2; j++)
		{
            for (k = 0 ; k < r2 ; k++) 
			{
                result[i][j] += A[i][k] * B[k][j] ;
            }
        }
    }

    display_matrix(r1, c2, result);
}

int main()
{
// Input of Order :

	int r1 , c1 , r2 , c2 ;
	
	printf("Enter order of Matrix 1 : ");
	scanf("%d %d",&r1,&c1);
	
	int matrix1[r1][c1];
	matrix(r1,c1,matrix1);
	display_matrix(r1,c1,matrix1);
	 
	printf("\n");
	
	printf("Enter order of Matrix 2 : ");
	scanf("%d %d",&r2,&c2);
	
	int matrix2[r2][c2];
	matrix(r2,c2,matrix2);
	display_matrix(r2,c2,matrix2);
	
// Checking order for multiplying and multiplying if c1=r2 :
	
	if (c1 == r2)
	{
		printf("\nMatrix can be multiplied\n");
		printf("\nResulting order after multiplication : %dx%d",r1,c2);
		printf("\n");
		Multiplication(r1,c1,r2,c2,matrix1,matrix2);
	}
	
	else
		printf("\nMatrix can't be multiplied\n");
	
	return 0;
}
