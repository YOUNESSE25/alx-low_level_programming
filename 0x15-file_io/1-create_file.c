#include"main.h"
/**
 * create_file - creates a file
 * @filename: pointer file name
 * @text_content: pointer to write
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int oopen;
	int wwrite;
	int l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	oopen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wwrite = write(oopen, text_content, l);
	if (oopen == -1 || wwrite == -1)
		return (-1);
	close(oopen);
	return (1);
}
