#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to
 *                  the POSIX standard output
 * @filename: name of the file we want to read from.
 * @letters: numbers of letters it should read and print.
 *
 * Return: actual number of letters it could read and print or
 *         if the file can not be opened or read, return 0 or
 *         if filename is NULL return 0 or
 *         if write fails or does not write the expected
 *         amount of bytes, return 0
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(size_t) * letters);

	if (buff == NULL)
		return (0);

	fd = open(filename, O_CREAT | O_RDONLY);

	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	r = read(fd, buff, letters);

	if (r == -1)
	{
		free(buff);
		return (0);
	}

	w = write(STDOUT_FILENO, buff, r);

	if (w == -1)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fd);

	return (w);

}
