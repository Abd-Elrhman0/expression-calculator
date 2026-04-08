#include "main.h"

// power operation
long double poww(int *x, int *y)
{
    long double f = 1;

    for (int j = 1; j <= 2; j++)
    {
        // handle Division by zero and 0^0 cases
        if ((*y == 0 && *x == 0) || (*x == 0 && *y < 0))
        {
            printf("Error: Division by zero and 0^0 are undefined values.\n");
            scan(x, y);
        }
        else if (*y < 0)
        {
            for (int j = 1; j <= -*y; j++)
                f = f * *x;
            return f;
        }
        else
        {
            for (int j = 1; j <= *y; j++)
                f = f * *x;
            return f;
        }
    }

    if ((*y == 0 && *x == 0) || (*x == 0 && *y < 0))
    {
        printf("you are stupid.\n");
        exit(0);
    }
    else if (*y < 0)
    {
        for (int j = 1; j <= -*y; j++)
            f = f * *x;
        return f;
    }
    else
    {
        for (int j = 1; j <= *y; j++)
            f = f * *x;
        return f;
    }
}
