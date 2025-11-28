/*Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

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

// Adding Matrix :

void Addition(int r1 , int c1 , int r2 , int c2 ,int A[r1][c1] , int B[r2][c2])
{
	int i , j , k ;
	int result[r1][c2] ;
	

	
    for (i = 0 ; i < r1; i++) 
	{
        for (j = 0 ; j < c2; j++)
		{
            result[i][j] += A[i][j] + B[i][j] ;
    
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
	
// Adding :
	
	if (r1 == r2 && c1 == c2)
	{
		printf("\nMatrix can be added");
		Addition(r1,c1,r2,c2,matrix1,matrix2);
	}
	
	else
		printf("\nMatrix can't be added\n");
	
	return 0;
}
