#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 48;

	while (i < 57)
	{
	for (j = i + 1 ; j <= 57 ; j++)
	{
		putchar(i);
		putchar(j);
		if  (i == 56 && j == 57)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}
	i++;
	}
	putchar('\n');
	return (0);
}
