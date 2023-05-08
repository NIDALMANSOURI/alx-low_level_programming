#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to string
 * Return: pointer to s
 */
char *rot13(char *s)
{
	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (s1[j] == s[i])
			{
				s[i] = s2[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
