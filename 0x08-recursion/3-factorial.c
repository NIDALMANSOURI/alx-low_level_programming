#include "main.h"
/**
 * factorial - function that returns the factorial of a number
 * @n: input as an integer
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
