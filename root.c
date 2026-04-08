
#include "main.h"

long double powww(long double k, int l)
{
    long double h = 1;

    for (int j = 1; j <= l; j++)
        h = h * k;

    return h;
}

long double roott(int *x, int *y)
{
    long double f;

    for (int j = 1; j <= 2; j++)
    {
        if (((*y % 2) == 0 && *x < 0) || *y < 2)
        {
            printf("Error: y can't be < 2 and you can't set x < 0 while y is even.\n");
            scan(x, y);
        }
        else if (*x < 0)
        {
            f = -1;

            while (fabsl(powww(f, *y) - *x) > 0.00000001)
            {
                f = (((*y - 1) * f) + (*x / (powww(f, (*y - 1))))) / *y;
            }

            return f;
        }
        else
        {
            f = 1;

            while (fabsl(powww(f, *y) - *x) > 0.00000001)
            {
                f = (((*y - 1) * f) + (*x / (powww(f, (*y - 1))))) / *y;
            }

            return f;
        }
    }

    if (((*y % 2) == 0 && *x < 0) || *y < 2)
    {
        printf("you are stupid.\n");
        exit(0);
    }
    else if (*x < 0)
    {
        f = -1;

        while (fabsl(powww(f, *y) - *x) > 0.00000001)
        {
            f = (((*y - 1) * f) + (*x / (powww(f, (*y - 1))))) / *y;
        }

        return f;
    }
    else
    {
        f = 1;

        while (fabsl(powww(f, *y) - *x) > 0.00000001)
        {
            f = (((*y - 1) * f) + (*x / (powww(f, (*y - 1))))) / *y;
        }

        return f;
    }
}