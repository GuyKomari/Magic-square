#include "data.h"

/*
The method gets a pointer to the 2D array, and its size.
The method receives the array values and if they are incorrect prints an error message and exits the program,
otherwise initialize the 2D array
*/
void MatrixInput(int **matrix, int n)
{
	char ch;
	int N = n*n;
	int i = 0;
	int j = 0;
	int k = 0;
	int num = 0;
	int count = 0;
	int num_flag = FALSE;/* parsing number */
	int first = TRUE;
	
	/* An array of flags with size of N+1, to check that there are no identical values */	
	int *flags;
	/* allocate the matrix memory */
	flags = malloc((N+1) * sizeof *flags);
	
	if(flags == NULL)                     
	{
        	printf("Error! memory not allocated.");
        	exit(1);
	}
        /*initialize the values of the flags array with zero*/
	for(k=0;k<N+1;k++)
        {
		flags[k]=0;
	}
		
	/* The main functionality of the method */	
	while ((ch = getchar())!='\n' && ch!=EOF)/* gets values up to a line break or end of a file */
	{
		if((ch == ' ' || ch == '\t'))/*last input is "Space" or "Tab" - mean end of number or whitespaces*/
		{
			if(num_flag)/* got the whole number */
			{	
				if(count < N)/* has not yet received enough values for the 2D array */
				{
					if(!checkNumber(flags,N,num))/*check if number is valid - there is no identical values, 
									and between the minimum and maximum available value we have determined */
						exit(1);
					else/* the number is valid */
					{
						num_flag=FALSE;
						count++;
						matrix[i][j] = num;
						j++;
						num = 0;
						if(j==n)
						{
							i++;
							j=0;
						}
					}
				}
			}
			continue;
		}
		else if(isdigit(ch) == 0)/* last input is not an integer */
		{
			printf("Incorrect value! - %c is invalid input, it is not a type of integer\n",ch);
			exit(1);
		}
		else if(first)/* case the first input is digit*/
		{
			first = FALSE;
			num_flag = TRUE;
			num = ch -'0';
			continue;
		}
		else if(isdigit(ch) != 0 &&count==N)/* if the user insert more values than necessary */
		{
			printf("You entered more than %d values. You should insert only %d values\n",count,count);
			exit(1);
		}
		else if(isdigit(ch) != 0 )/* the input is an integer */
		{
		    num_flag = TRUE;
		    num =  (num*10) + (ch-'0');
		    continue;
		}
	}/* end of while loop */
		
	if(count < N)/* case for no reference to the last number */
	{
		if(!num_flag)
		{
			printf("You entered only %d values while you should insert %d values \n",count, N);
			exit(1);
		}
		else
		{
			if(checkNumber(flags,N,num))
			{
				count++;
				matrix[i][j]=num;
			}
			else
				exit(1);
		}

		if(count<N)
		{
			printf("You entered only %d values while you should insert %d values \n",count, N);
			exit(1);
		}
	}
	/* deallocate the flags array */
	free(flags);
}/* end of method */

