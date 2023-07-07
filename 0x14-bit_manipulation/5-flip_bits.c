#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: number one
 * @m: number two
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int c = 0;

	while (a)
	{
		if (a & 1ul)
			c++;
		a = a >> 1;
	}
	return (c);
}
