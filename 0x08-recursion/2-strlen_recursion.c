#include "main.h"

/**
 *_strlen_recursion - recursively find the lenght of a string
 *@s : pointer to the string parameter
 *Return: len (length of the string)
 */

int _strlen_recursion(char *s)
{
int n = 0;
if (!(*s == '\0'))
{
n++;
n +=  _strlen_recursion(s + 1);
}
return (n);
}
