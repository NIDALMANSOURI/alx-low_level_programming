#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program
 * @ac : argument count
 * @av: characters
 * Return: 1 on success 0 on failure
 */
int main(int ac, char **av)
{
	int from_f = 0, to_f = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_f = open(av[1], O_RDONLY);
	if (from_f == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_f = open(av[2], O_WRONLY | O_CREAT | o_TRUNC, PERMISSIONS);
	if (to_f == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	while ((b = read(from_f, buf, READ_BUF_SIZE)) > 0)
		if (write(to_f, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	from_f = close(from_f);
	to_f = close(to_f);
	if (from_f)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_f), exit(100);
	if (to_f)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_f), exit(100);
	return (EXIT_SUCCESS);
}
