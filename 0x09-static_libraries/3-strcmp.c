#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: input value
 * @s2: input value
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int c, i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	c = s1[i] - s2[i];
	return (c);
}
