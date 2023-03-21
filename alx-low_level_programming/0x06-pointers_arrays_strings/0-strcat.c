#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: pointer input string.
 * @src: pointer input string.
 * Return: dest String.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
	}
	while ((i <= i + j) && (k <= j))
	{
		if (k == j)
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
