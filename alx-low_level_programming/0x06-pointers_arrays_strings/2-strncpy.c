#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer input string.
 * @src: pointer input string.
 * @n: input integer.
 * Return: dest String.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while ((k < n) && (src[k] != '\0'))
	{
		dest[k] = src[k];
		k++;
	}
	for ( ; k < n; k++)
	{
		dest[k] = '\0';
	}
	return (dest);
}
