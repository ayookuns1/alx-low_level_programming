#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */

int main(void)
{
int num = 0;
while (num <= 9)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);
}
