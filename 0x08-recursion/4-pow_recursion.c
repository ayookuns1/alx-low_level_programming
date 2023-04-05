#include "main.h"

/**
 *_pow_recursion - return x power y
 *@x: x to raise to power y
 *@y: y to be raised by x
 *Return: res(The value of x raised to the power of y.)
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x *= _pow_recursion(x, y - 1));

}
