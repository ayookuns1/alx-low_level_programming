#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
int a = -1, i;
for (i = 0; dest[i] != '\0'; i++)
{
;
}
do
{
a++;
dest[i] = src[a];
i++;
}
while(src[a] != '\0');
return (dest);
}
