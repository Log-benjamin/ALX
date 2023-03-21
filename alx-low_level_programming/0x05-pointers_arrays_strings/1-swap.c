#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: pointer variable
 * @b: pointer variable
 * void: have no return value
 */
void swap_int(int *a, int *b)
{
	int temp_value = *a;
	*a = *b;
	*b = temp_value;
}
