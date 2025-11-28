/*Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

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

int main()
{
// Read and Print :

	int r , c , n , i;
	
	printf("Enter number of matrix you want to enter : ");
	scanf("%d",&n);
	
	printf("%d");
	
	for(i=1 ; i<=n ; i++)
	{
		printf("Enter order of Matrix %d : ",i);
		scanf("%d %d",&r,&c);
		
		int m[r][c];
		matrix(r,c,m);
		display_matrix(r,c,m);
		 
		printf("\n");
	}
	
	return 0;
}
