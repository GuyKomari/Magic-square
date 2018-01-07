#include "data.h"
/*
 flags - pointer to an 1D array
 N - array size
 num - a number to check
 The method checks whether the number is valid :
 1. between 1 and N   2. there is no samilar number in the magic matrix
 */
int checkNumber(int *flags,int N,int num)
{
	int result = 0;
	if((num >= 1 && num <= N))
	{				
		flags[num]++;
		if(flags[num]<=1)
			result = 1;
		else
			printf("Two or more with the same value of %d\n",num);
	}
	else
		printf("%d is invalid value! the array values must be between %d and %d\n",num,1,N);
	return result;
}
	
	
