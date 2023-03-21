#include  "main.h"
/**
 * _isalpha - Checks for alphabet
 *@c: The character to be checked
 * Return: 1 (True - lowercase) OR 0 (False - not lowecase)
 */
int _isalpha(int c)
{

if (c >= 65 && c <= 122)
	return (1);
else
	return (0);

}
