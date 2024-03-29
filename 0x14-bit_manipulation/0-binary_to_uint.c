#include "main.h"
#include <stddef.h> /* For NULL definition */

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 * string b that are not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	const char *current;

	if (b == NULL)
		return (0);

	current = b;

	while (*current != '\0')
	{
		if (*current == '0')
			result = (result << 1); /* Shift left to add a 0 */
		else if (*current == '1')
			result = (result << 1) | 1; /* Shift left and add a 1 */
		else
			return (0); /* Return 0 if a character other than 0 or 1 is found */

		current++; /* Move to the next character */
	}

	return (result);
}

