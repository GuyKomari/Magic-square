#include "data.h"

/* main function */
int main() 
{
	int n=sizeInput();/*gets a size for the 2d array, only it is valid*/
	int i;
	int **matrix;
	matrix = malloc(n * sizeof *matrix);	
	
        /* allocate the matrix memory */
	if(matrix == NULL)                     
	{
		printf("Error! memory not allocated.");
		exit(1);
	}
	for (i=0; i<n; i++)
	{
		matrix[i] = malloc(n * sizeof *matrix[i]);
	}
    
	/* used functions */

	MatrixInput(matrix,n);
	printMatrix(matrix,n);
	isMagic(matrix,n);
	
	/* deallocate the array */
	for (i=0; i<n; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
	
	/* end of main */
	return 0;
}



