#include "main.h"

// Dispatcher function: chooses operation based on type and operator
// type: 'm' for math, 'b' for bitwise
long double calc(int *x, int *y, char op, char type)
{
	if (type == 'm') // mathematical operations
	{

		if (op == '+')
			return sum(x, y);

		else if (op == '-')
        	return sub(x, y);

		else if (op == '*')
        	return mult(x, y);

		else if (op == '/')
        	return divv(x, y);

		else if (op == '^')
        	return poww(x, y); // power (not XOR here)

		else if (op == 'r')
			return roott(x, y);
	
		else
		{
			// invalid operator
			printf("'%c' not an operation in this calculator.\n", op);

			return 1;
		}

	}

	else if (type == 'b') // bitwise operations
	{
		if (op == '&')
			return _and(x, y);

		else if (op == '|')
			return _or(x, y);

		else if (op == '^')
			return _xor(x, y);

		else if (op == '~')
			return _not(x);

		else if (op == '<')
			return left_shift(x, y);

		else if (op == '>')
			return right_shift(x, y);

		else
		{
			// invalid operator
			printf("'%c' not an operation in this calculator.\n", op);
		}
	}
}
