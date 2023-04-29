#include "main.h"
/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Return: Numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + 48);
			}
			_putchar((y % 10) + 48);
		}
		_putchar('\n');
	}
}
