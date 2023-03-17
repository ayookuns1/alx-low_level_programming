#include <stdio.h>

/**
* main - Program entry point
*
* Return: 0 on success. Error code otherwise
*/

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
printf("%c ", letter);
}
printf("\n");
return (0);
}

