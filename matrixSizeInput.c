#include "data.h"
/*
returns the 2D matrix size, if valid!
otherwise, prints an error Message, and exits the program 
*/
int sizeInput()
{
	char ch;
	int num = 0;
	int count = 0;
	int firstDigit = TRUE;/* case for the firs digit */
	printf("Hello, please insert the size of the 2D array, then insert the matrix values \n");
	printf("Pay attention that N, the size of the 2D array is from %d to %d, and the matrix values are integers between %d and N^2\n",MIN_SIZE,MAX_SIZE,1);

	while(TRUE)/* insert whitespaces - "Space" or "Tab"  before number */
	{
		ch = getchar();
		if((ch == ' ' || ch == '\t'))/* input is "Space" or "Tab"*/
		{
			if(count==0)/* still didnt insert a number, the loop should continue */
				continue;
			else/* we got the input of the array size, lates go ahead for the array values */
			{
				break;
			}
				
		}
		else if(isdigit(ch) == 0)/* if the input is not a number */
		{
			printf("Incorrect array size! - %c is invalid input for the array size\n",ch);
			exit(1);
		}
		else if(firstDigit && isdigit(ch) != 0)/* usecase of the first digit */
		{
			firstDigit = FALSE;
			num = ch -'0';
			count++;
		}
		else if (!firstDigit && isdigit(ch) != 0)/* the numer contains more than 1 digit */
		{
		    num =  (num*10) + (ch-'0');
		}
	}
	/* we got the array size, now we need to check if the size between the minimum and maximum size we have determined */	
	if(num >= MIN_SIZE && num <= MAX_SIZE)
		return num;
	else
	{
		printf("Incorrect array size! %d is invalid! The array size must be between %d and %d !\n",num,MIN_SIZE,MAX_SIZE);
		exit(1);
	}
}
