#include "main.h"

/**
 * error_file - handle errors
 * @file_from: file to copy from
 * @file_to: destination of the copy
 * @argv: argument vector:w
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error : can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copy content of a file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, erro;
	ssize_t nchars, wr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buff, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		wr = write(file_to, buff, 1024);
		if (wr == -1)
			error_file(0, -1, argv);
	}
	erro = close(file_from);
	if (erro == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd  %d\n", file_from);
		exit(100);
	}
	erro = close(file_to);
	if (erro == -1)
	{
		dprintf(STDERR_FILENO, "Error : can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

