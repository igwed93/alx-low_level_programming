#include "main.h"

/**
 * close_file - close file and check if was successful
 * @fd: file descriptor
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * err_handler - returns requisite exit status
 * @fd: file descriptor
 * @fname: file descriptor
 * @type: type of sys call
 * @buffer: buffer to be free if exit status
 * Return: 0 on success, exit status on error
 */
int err_handler(int fd, char *fname, int type, char *buffer)
{
	int status = 0;
	(void)fd;

	switch (type)
	{
	case READ_ERROR:
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", fname);
		if (buffer != NULL)
			free(buffer);
		status = 98;
		break;
	case WRITE_ERROR:
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fname);
		if (buffer != NULL)
			free(buffer);
		status = 99;
		break;
	default:
		break;
	}
		return (status);
}


/**
 * make_buffer - allocates a buffer of BUFFERSIZE
 * @fName: file destination to print error
 * Return: pointer to new allocated buffer
 */
char *make_buffer(char *fName)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFERSIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fName);
		exit(99);
	}
	return (buffer);
}

/**
 * main - copies contents of 1 file to another
 * @argc: number of parameters
 * @argv: array of parameter
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int fd_src, fd_dest, result;
	char *buffer; /*buffer*/

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_src = open(argv[1], O_RDONLY);
	if (fd_src < -1)
		exit(err_handler(fd_src, argv[1], READ_ERROR, NULL));

	buffer = make_buffer(argv[2]);

	umask(0);
	fd_dest = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_dest < -1)
		exit(err_handler(fd_dest, argv[2], WRITE_ERROR, buffer));

	do {
		result = read(fd_src, buffer, BUFFERSIZE);
		if (result == -1)
			exit(err_handler(result, argv[1], READ_ERROR, buffer));
		result = write(fd_dest, buffer, result);
		if (result == -1)
			exit(err_handler(result, argv[2], WRITE_ERROR, buffer));
		fd_dest = open(argv[2], O_RDWR | O_APPEND | O_TRUNC);
		if (fd_dest == -1)
			exit(err_handler(fd_dest, argv[2], WRITE_ERROR, buffer));
	} while (result > 0);
	close_file(fd_src);
	close_file(fd_dest);
	free(buffer);
	return (0);
}
