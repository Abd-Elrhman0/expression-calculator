#include "main.h"

// division operation
long double divv(int *x, int *y)
{

    long double f;

    for (int j = 1; j <= 2;  j++)
	{
		// verify input validation
		// Prompts user to re-enter y if it is zero
		if(*y == 0)
		{
			printf("Error: Division by zero is undefined.\nPlease enter a non-zero value for y.\n");
			scan(x, y);
		}
		else
		{
			f = (long double) *x / *y;
			return f;
		}


	}
	
	if(*y == 0)
    {
		printf("You are stupid\n");
    	exit(0);
                        
	}
	else
    {
        f = (long double) *x / *y;
        return f;
    }

}
