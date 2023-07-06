#include "main.h"
/**
 * get_bit - return value of a bit at given index
 * @n: number to index
 * @index: index of bit to get
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
