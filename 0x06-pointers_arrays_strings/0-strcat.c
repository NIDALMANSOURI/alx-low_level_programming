#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int length, z;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (z = 0; src[z] != '\0'; z++; length++)
	{
		dest[length] = src[z];
	}
	dest[length] = '\0';
	return (dest);
}

