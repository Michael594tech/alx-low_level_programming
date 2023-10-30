#include "main.h"

/**
*read_textfile - a program that reads a text file and prints
*it to the POSIX standard output
*@letters: numbers of letter output
*@filename: filename
*Return:returns 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

	int so;
	ssize_t now, new;
	char *buffer;

	if (!filename)
		return (0);
	so = open(filename, O_RDONLY);

	if (so == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	now = read(so, buffer, letters);
	new = write(STDOUT_FILENO, buffer, now);
	close(so);
	free(buffer);
	return (new);
}
