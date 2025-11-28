/*Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

int main()
{
    int i, j , m , n ;
	
	printf("Enter order of matrix : ");
	scanf("%d %d",&m,&n);
	
	printf("\n");
	
	int matrix[m][n];
	int transpose[n][m];
	
    printf("Enter elements of %dx%d matrix: \n",m,n);
    
    for(i = 0 ; i < m ; i++) 
	{
        for(j = 0 ; j < n ; j++) 
		{
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

	printf("\nMatrix is : \n");
	
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			printf("%d\t",matrix[i][j]);	
		}
		
		printf("\n");	
	}
	
	for(i = 0  ; i < m ; i++) 
	{
        for(j = 0 ; j < n ; j++)
			transpose[j][i] = matrix[i][j];
    }
	
	printf("\nTranspose is : \n");
	
	for(i = 0  ; i < n ; i++) 
	{
        for(j = 0 ; j < m ; j++) 
            printf("%d\t",transpose[i][j]);	
        
        printf("\n");
    }
	
	
	return 0;
}
