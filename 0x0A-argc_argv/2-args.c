#include <stdio.h>
#include "main.h"
/**
* main - prints program name
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
int i;
for (i = 0; argv[i]; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

