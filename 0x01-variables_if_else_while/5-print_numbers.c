#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */

int main(void)
{
char digit = '0';
while (digit <= '9')
{
putchar(digit);
digit++;
}
printf("\n");
return (0);
}
