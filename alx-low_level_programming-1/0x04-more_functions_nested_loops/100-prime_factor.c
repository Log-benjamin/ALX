#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143
 * Return: 0.
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long larg_prime = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			larg_prime = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", larg_prime);
	return (0);
}
