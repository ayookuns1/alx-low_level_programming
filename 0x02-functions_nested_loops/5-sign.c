#include  "main.h"
/**
 *print_sign - Checks for lowercase character
 *@n: The character to be checked
 * Return: 1 (True - lowercase) OR 0 (False - not lowecase)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);

}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(0 + '0');
return (0);

}
_putchar('\n');
_putchar(',');
}
