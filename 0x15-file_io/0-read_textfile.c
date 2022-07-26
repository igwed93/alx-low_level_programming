#include "main.h"

/**
 * read_textfile - function that reads a textfile to the
 * standard output.
 * @filename: filename to read to standard output
 * @letters: number of letters to read and print
 *
 * Return: the amount of characters printed or
 * 0 if filename is NULL or write failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int count, fd_open, fd_read;

	if (filename == NULL)
		return (0);

	/* open file and get file descriptor */
	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
		return (0);

	/* allocate memory in buffer to read contents of fd */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) /* verify that malloc did not fail */
		return (0);

	/* read contents of fd */
	fd_read = read(fd_open, buffer, letters);
	if (fd_read == 0)
	{
		free(buffer);
		close(fd_open);
		return (0);
	}

	/* write to standard output */
	count = write(STDOUT_FILENO, buffer, fd_read);
	if (count == -1)
	{
		free(buffer);
		close(fd_open);
		close(fd_read);
		return (0);
	}
	close(fd_open);
	close(fd_read);

	return (count);
}
