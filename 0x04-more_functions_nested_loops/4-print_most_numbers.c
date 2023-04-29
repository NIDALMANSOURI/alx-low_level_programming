#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9
 * excluding 2 and 4
 * Return: the numbers from 0 to 9
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 4 || x == 2)
		{
			continue;
		}
		else
		{
			_putchar(x + 48);
		}
	}
	_putchar('\n');
}

