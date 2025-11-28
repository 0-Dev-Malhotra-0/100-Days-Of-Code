/*Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

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

// Check Symmetry :

void check(int r, int c,int matrix[r][c])
{
    int is_symmetric = 1 , i , j;
    
    for(i = 0; i < r; i++)
	{
        for(j = 0; j < c; j++)
		{
            if(matrix[i][j] != matrix[j][i])
			{
                is_symmetric = 0;
                break;
            }
        }
        if(!is_symmetric)
            break;
    }
    
    if(is_symmetric)
	{
        printf("\nTrue\n");
    } 
	else
	{
        printf("\nFalse\n");
    }
}

int main()
{
	int r , c , n , i;
	
	printf("Enter number of matrix you want to enter : ");
	scanf("%d",&n);
		
	printf("\n");
	
	for(i=1 ; i<=n ; i++)
	{
		printf("Enter order of Matrix %d : ",i);
		scanf("%d %d",&r,&c);
		
		if(r == c)
		{
			int m[r][c];
			matrix(r,c,m);
			display_matrix(r,c,m);
			check(r,c,m);
			 
			printf("\n");
		}
		
		else
			printf("\nFalse");
	}
	
	return 0;
}
