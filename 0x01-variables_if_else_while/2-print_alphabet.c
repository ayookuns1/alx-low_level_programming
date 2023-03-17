#include <stdio.h>

/**
* main - Program entry point
*
* Return: 0 on success. Error code otherwise
*/

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
