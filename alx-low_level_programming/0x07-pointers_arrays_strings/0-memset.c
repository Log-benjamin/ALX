#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: input pointer
 * @b: input character
 * @n: input
 * Return: Pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;
	unsigned int y;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	for (y = 0; y < n; y++)
	{
		s[y] = b;
	}
	return (s);
}
