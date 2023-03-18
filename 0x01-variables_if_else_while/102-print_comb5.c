#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */

int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1; num2 <= 99; num2++)
{
if (num1 == num2)
{
continue;
}
if (num1 > num2)
{
continue;
}
putchar(num1 / 10 + '0');
putchar(num1 % 10 + '0');
putchar(' ');
putchar(num2 / 10 + '0');
putchar(num2 % 10 + '0');
if (num1 == 98 && num2 == 99)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}

