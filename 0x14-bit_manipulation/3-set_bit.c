#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at given index
 * @n: number
 * @index: index of the bit
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
