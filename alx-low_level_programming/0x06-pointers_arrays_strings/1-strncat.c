#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: pointer input string.
 * @src: pointer input string.
 * @n: input integer.
 * Return: dest String.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	while ((k <= n) && (src[k] != '\0'))
	{
		if (k == n)
		{
			dest[i] = '\0';
		}
		else
		{
		dest[i] = src[k];
		}
		i++;
		k++;
	}
	return (dest);
}
