#include "main.h"
/**
*factorial - prints the factorial of the number
*
*@n: the integer
*Return: If n > 0 - the factorial of n.
 *        If n < 0 - 1 to indicate an error.
*/
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n > 0)
{
return (n * factorial(n - 1));
}
else
{
return (-1);
}
}
