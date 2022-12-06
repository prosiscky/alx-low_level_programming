#include "main.h"

char *create_buff(char *str);
void close_file(int fd);



/**
 * main - check the code
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd1, fd2, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	r = read(fd1, buff, 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n",
				argv[1]);
			free(buff);
			exit(98);
		}
		w = write(fd2, buff, r);
		if (fd2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n",
					argv[2]);
			free(buff);
			exit(99);
		}
		r = read(fd1, buff, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	free(buff);
	close_file(fd1);
	close_file(fd2);
	return (0);
}

/**
 * create_buff - allocates memory
 * @str: pointer to allocate memory to
 *
 * Return: address to the allocated memory
 */

char *create_buff(char *str)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				str);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - close a file
 * @fd: file id
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
