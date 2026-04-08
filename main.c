#include "main.h"
int main()
{
	char type;
	int x, y;
    char op;

	printf("what is the problem type, Bitwise or Mathematical? (type b for Bitwise and m for Mathematical) ");
	scanf("%c", &type);

	if (type == 'm' || type == 'b')
	{
		if (type == 'm')
			printf("operations~~(+ , - , * , / , ^ , r 'y√x') ");

		else if (type == 'b')
			printf("operations~~( & , | , ^ , ~ , < (<<) , >(>>) ) ");

		scanf(" %c", &op);

		printf("x, y must be integers!\n");
		
		if (op == '~')
		{
			printf("x = ");
			scanf("%d", &x);
		}
		else
			scan(&x, &y);

		long double R = calc(&x, &y, op, type);

		if(op == 'r')
			printf("%d √ %d = %Lf\n", y, x, R);
		else if (op == '~')
			printf("= %Lf\n", R);
		else if (op == '<')
			printf("%d << %d = %Lf\n", x, y, R);
		else if (op == '>')
			printf("%d >> %d = %Lf\n", x, y, R);
		else
			printf("%d %c %d = %Lf\n", x, op, y, R);
		
	}

	else
	{
		printf("please enter b or m only\n");
		return 1;
	}
}
