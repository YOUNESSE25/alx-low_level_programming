#include"main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer file
 * @text_content: data to add
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
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
	oopen = open(filename, O_WRONLY | O_APPEND);
	if (oopen == -1)
		return (-1);
	wwrite = write(oopen, text_content, l);
	if (wwrite == -1)
		return (-1);
	close(oopen);
	return (1);
}
