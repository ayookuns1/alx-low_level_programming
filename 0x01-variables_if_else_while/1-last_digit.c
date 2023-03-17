#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/


int main(void)

{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
if(lastDigit > 5)
{
 printf("Last digit of %d is %d and  greater than 5\n", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Last digit of %d is %d and  is 0\n", n, lastDigit);
}
else if (lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of %d is %d and less than 6\n and", n, lastDigit);
printf("not 0\n");
}
	return (0);
}
