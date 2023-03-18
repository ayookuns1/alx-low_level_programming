#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */

int main(void)
{
int num1, num2, num3;

for (num1 = 0; num1 <= 7; num1++)
{
for (num2 = num1 + 1; num2 <= 8; num2++)
{
for (num3 = num2 + 1; num3 <= 9; num3++)
{
int num = num1 * 100 + num2 * 10 + num3;
putchar(num / 100 + '0');
putchar(num % 100 / 10 + '0');
putchar(num % 10 + '0');

if (num1 != 7 || num2 != 8 || num3 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');
return (0);
}

