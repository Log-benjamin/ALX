#include "main.h"
/**
 * print_last_digit- prints the last digit of a number.
 * @z: passed integer
 * Return: will be returned an integer value
 */
int print_last_digit(int z)
{
	int k = z % 10;

	if (z < 0)
		k = k * -1;
	_putchar(k + '0');
	return (k);
}
