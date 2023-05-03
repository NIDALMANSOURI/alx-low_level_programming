#include "main.h"
/**
 * swap_int - a function that swapes the values of two integers
 * @a: input as an integer
 * @b: input as an integer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
