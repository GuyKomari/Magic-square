#include "data.h"

/*
this method checks whether a given matrix is a magic square.
A magic square is an NXN 2D array that contains values from 1 to N^2,
so that the sum of values is the same in each row, position, and diagonal.
*/
void isMagic(int **matrix, int n)
{
	/* variables declaration */
	int sum,sumTemp,i,j;
	int flag = TRUE;
	sum = 0;
	sumTemp = 0;

	/* For diagonal elements */
	for (i = 0; i < n; i++) 
	{
		sum = sum + matrix[i][i];
	}
	for (i = n-1; i >= 0 ; i--) 
	{
		sumTemp = sumTemp + matrix[i][i]; 
	}
	if(sum!=sumTemp)
	{
		flag=FALSE;
	}
	/* For Rows */

	for (i = 0; i < n && flag ; i++) 
	{
		sumTemp = 0;
		for (j = 0; j < n; j++) 
		{
			sumTemp = sumTemp + matrix[i][j];
		}
		if (sum != sumTemp)
		{
			flag = FALSE;
			break;
		}
	}

	/* For Columns */
	for (i = 0; i < n && flag; i++) 
	{
		sumTemp = 0;
		for (j = 0; j < n; j++) 
		{
 		sumTemp = sumTemp + matrix[i][j];
		}
		if (sum != sumTemp)
		{
			flag = FALSE;
         		break;
		}
	}
	if (flag)
	printf("\nNice! This is a \"Magic-square\"\n");
	else
	printf("\nThis is not a \"Magic-square\"\n");
}

