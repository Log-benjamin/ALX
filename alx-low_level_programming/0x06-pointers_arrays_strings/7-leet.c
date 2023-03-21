#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: pointer input string.
 * Return: string.
 */
char *leet(char *s)
{
	int lowerCase[] = {97, 101, 111, 116, 108};
	int upperCase[] = {65, 69, 79, 84, 76};
	int replace[] = {52, 51, 48, 55, 49};
	int z;
	int w;

	for (z = 0; s[z] != '\0'; z++)
	{
		w = 0;

		while (w < 5)
		{
		if (s[z] == lowerCase[w] || s[z] == upperCase[w])
		{
			s[z] = replace[w];
			break;
		}
		w++;
		}
	}
	return (s);
}
