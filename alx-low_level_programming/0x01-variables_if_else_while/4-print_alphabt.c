#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char L;

	for (L = 'a' ; L <= 'z' ; L++)
	{
		if (L == 'e' || L == 'q')
		{
			continue;
		}
		putchar(L);
	}
	putchar('\n');
	return (0);
}
