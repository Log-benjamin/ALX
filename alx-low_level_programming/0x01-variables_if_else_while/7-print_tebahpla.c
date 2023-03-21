#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char L;

	for (L = 'z' ; L >= 'a' ; L--)
	{
		putchar(L);
	}
	putchar('\n');
	return (0);
}
