#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: input integer.
 * Return: s String.
 */
char *rot13(char *s)
{
	char alphas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (alphas[j] != '\0')
		{
			if (s[i] == alphas[j])
			{
				s[i] = rot13[j];
				break;
			}
			j++;
		}
	}
	return (s);
}
