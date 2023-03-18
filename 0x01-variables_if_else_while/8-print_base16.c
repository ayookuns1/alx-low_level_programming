#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */

int main(void)
{
int num = 0;
while (num <= 15)
{
if (num < 10)
{
putchar(num + '0');
}
else
{
putchar(num - 10 + 'a');
}
num++;
}
putchar('\n');
return (0);
}

