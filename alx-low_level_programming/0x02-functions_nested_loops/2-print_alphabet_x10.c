#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		char i = 'a';
	while (i <= 'z')
	{
	_putchar(i);
	i++;
	}
	_putchar('\n');
	}
}
