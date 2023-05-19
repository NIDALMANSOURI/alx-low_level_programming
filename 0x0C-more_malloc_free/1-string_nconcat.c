#include "main.h"
#include <stdio.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: nummber of bytes from s2 to concatenate
 * Return: pointer to space of memory containing concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, l1, l2;

	/*check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*compute the lenght of strings*/
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	/*Memory reservation*/
	s = malloc(l1 + n + 1);
	if (s == NULL)
		return (NULL);
	/*copy first string into s*/
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	/*copy second string into s*/
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
