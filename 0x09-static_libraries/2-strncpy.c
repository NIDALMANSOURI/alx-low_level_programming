#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be used
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	for (; c < n; c++)
		dest[c] = '\0';
	return (dest);
}
