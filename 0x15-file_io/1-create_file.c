#include "main.h"

/**
 * create_file -  a function that creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the created file
 *
 * Return: 1 on success and -1 if an error occurs
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count, len = 0;

	if (filename == NULL)
		return (-1);

	/* open file and get file descriptor */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	/* write into file description */
	count = write(fd, text_content, len);

	if (count == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
