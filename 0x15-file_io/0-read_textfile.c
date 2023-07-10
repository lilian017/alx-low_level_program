#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reading text file that also prints to POSIX stdout
 * @filename: points to file name
 * @letters: number of letters to be read and printed by function
 * Return: 0 if filename NULL if fails or write fails
 * bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == 1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (o);
	}
	free(buffer);
	close(o);

	return (w);
}
