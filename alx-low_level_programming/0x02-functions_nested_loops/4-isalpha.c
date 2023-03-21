#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: takes in a character
 * Return: 0 if c is not a letter, 1 if c is a letter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
