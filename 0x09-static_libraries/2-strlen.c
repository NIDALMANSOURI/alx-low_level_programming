#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: input
 * Return: legenth of string
 */
int _strlen(char *s)
{
	int string_legenth = 0;

	while (s[string_legenth])
		string_legenth++;
	return (string_legenth);
}

