#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int scan(int *x, int *y);
long double sum(int *x, int *y);
long double calc(int *x, int *y, char op, char type);
long double sub(int *x, int *y);
long double mult(int *x, int *y);
long double divv(int *x, int *y);
long double poww(int *x, int *y);
long double roott(int *x, int *y);
long double powww(long double k, int l);
long double _and(int *x, int *y);
long double _or(int *x, int *y);
long double _xor(int *x, int *y);
long double _not(int *x);
long double left_shift(int *x, int *y);
long double right_shift(int *x, int *y);
#endif // !ΜΑΙΝ Η
