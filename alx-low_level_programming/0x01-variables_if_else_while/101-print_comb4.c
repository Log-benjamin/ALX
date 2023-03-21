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
	int k;

	i = 48;

	while (i < 57)
	{
	for (j = i + 1 ; j <= 56 ; j++)
	{
		for (k = j + 1; k <= 57; k++)
		{
		putchar(i);
		putchar(j);
		putchar(k);
		if  (i == 55 && j == 56 && k == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	}
	i++;
	}
	putchar('\n');
	return (0);
}
