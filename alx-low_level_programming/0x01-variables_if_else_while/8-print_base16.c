#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char N;
	char A;

	for (N = '0' ; N <= '9' ; N++)
	{
		putchar(N);
	}
	for (A = 'a' ; A <= 'f' ; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
