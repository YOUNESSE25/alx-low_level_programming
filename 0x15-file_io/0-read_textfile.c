#include<stdlib.h>
#include"main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: pointer file
 * @letters: num of letters
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t oopen;
	ssize_t rread;
	ssize_t wwrite;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	oopen = open(filename, O_RDONLY);
	rread = read(oopen, buf, letters);
	wwrite = write(STDOUT_FILENO, buf, rread);
	free(buf);
	close(oopen);
	return (wwrite);
}
