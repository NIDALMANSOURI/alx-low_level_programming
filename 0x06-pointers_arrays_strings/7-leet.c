#include "main.h"
/**
 * leet - funtion that encodes a string into 1337
 * @s: a pointer to string
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s1[j] == s[i])
			{
				s[i] == s2[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
