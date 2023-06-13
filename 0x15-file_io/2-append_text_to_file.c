#include "main.h"
/**
 * _strlen - return the length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (len)
		bytes = write(f, text_content, len);
	close(f);
	return (bytes == len ? 1 : -1);
}
