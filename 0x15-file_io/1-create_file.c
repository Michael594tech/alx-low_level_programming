#include "main.h"

/**
 *create_file - a program that cfreates a file
 *@text_content: a NULL terminated string to write  to the file
 *@filename: filename
 *Return: 1 if fails; otherwise -1 when it fails
 */

int create_file(const char *filename, char *text_content)
{
	int mk;
	int alpha;
	int new;

	if (!filename)
		return (-1);
	mk = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (mk == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (alpha = 0; text_content[alpha]; alpha++)
		;

	new = write(fd, text_content, alpha);
	if (new == -1)
		return (-1);
	close(mk);
	return (1);
}
