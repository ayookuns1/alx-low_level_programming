#include "main.h"

/**
*_isupper - checks for uppercase
*@c: character to be inputed
*
*Return: uppercase
*/

int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
else
return (0);
}
