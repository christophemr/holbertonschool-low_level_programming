#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of the created file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int wr;


	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
