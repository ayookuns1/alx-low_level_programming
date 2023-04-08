#include "main.h"
/**
 * _strstr - Locating a substring
 *
 * @needle: Occurance to find
 *
 * @haystack: String to search
 *
 * Return: Pointer
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *pop = haystack;
char *car = needle;

while (*haystack && *car && *haystack == *car)
{
haystack++;
car++;
}
if (!*car)
return (pop);
haystack = pop + 1;
}
return (0);
}
