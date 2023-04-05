#include "main.h"

/**
 * _sqrt_recursion - main funct
 * @n: int n
 * Return: int
 */

int _sqrt_recursion(int n)
{
if (n < 0) {
return -1;
}
if (n == 0 || n == 1)
{
return n;
int x ;
x = _sqrt_recursion(n / 4) * 2;
if ((x+1)*(x+1) <= n && (x+1)*(x+1) >= x*x)
{
return x+1;
}
else {
return x;
}
}
}
