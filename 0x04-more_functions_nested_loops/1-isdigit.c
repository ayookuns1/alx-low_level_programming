#include "main.h"

/**
*_isdigit - checks for uppercase
*@c: character to be inputed
*
*Return: digit
*/

int _isdigit(int c)
{
if (c > 47 && c < 58)
return (1);
else
return (0);
}
