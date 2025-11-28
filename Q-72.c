/*Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

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

// Adding Elements :

void sum(int r , int c , int matrix[r][c])
{
	int i , j , s=0;
	
	for(i = 0 ; i < r ; i++)
	{
		for(j=0 ; j < c ; j++)
		{
			s+=matrix[i][j];
		}
	}
	
	printf("\nSum is : %d\n",s);
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
		
		int m[r][c];
		matrix(r,c,m);
		display_matrix(r,c,m);
		sum(r,c,m);
		 
		printf("\n");
	}
	
	return 0;
}
