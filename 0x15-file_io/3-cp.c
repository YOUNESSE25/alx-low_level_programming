#include"main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * cree_buf - mallocing a buffer
 * @f: pointer file
 * Return: pointer location
 */
char *cree_buf(char *f)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (!buf)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buf);
}
/**
 * cclose - close file
 * @file_to_close: file to close
 */
void cclose(int file_to_close)
{
	int i = close(file_to_close);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_close);
		exit(100);
	}
}


/**
 * main - copies data of a file to another file.
 * @argc: the number of arguments passed
 * @argv:  array of character pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sorce, dest, rread, wwrite;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = cree_buf(argv[2]);
	sorce = open(argv[1], O_RDONLY);
	rread = read(sorce, buf, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (sorce == -1 || rread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wwrite = write(dest, buf, rread);
		if (dest == -1 || wwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		rread = read(sorce, buf, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (rread > 0);
	free(buf);
	cclose(sorce);
	cclose(dest);
	return (0);
}
