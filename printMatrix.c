#include "data.h"

/* 
**matrix - a pointer to a matrix
n - matrix size
The method prints the matrix 
*/
void printMatrix(int **matrix, int n)
{
	int i,j;
	printf("Entered matrix is : \n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n ; j++) 
		{
			printf("%3d\t",matrix[i][j]);
		}
	printf("\n");
	}	
}
