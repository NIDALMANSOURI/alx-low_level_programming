#include "main.h"
/**
 * _isupper - checks if a letter is uppercase
 *
 * @c: input letter as an integer
 *
 * Return: 1 for upper letter. 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
