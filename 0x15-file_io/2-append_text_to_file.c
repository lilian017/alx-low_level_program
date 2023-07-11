#include "main.h"
#include <string.h>
#include <fcntl.h>


/**
 * _strlen - function that finds the length of string
 * @str: pointer string
 * Return: string length
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - a function that appends text
 * @filename: file name
 * @text_content: NULL terminated string
 * Return: 1 on success, and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn;
	ssize_t length;

	if (filename == NULL)
		return (-1);
	fn = open(filename, O_WRONLY | O_APPEND);

	if (fn == -1)
		return (-1);
	if (text_content != NULL)
		length = write(fn, text_content, strlen(text_content));
	close(fn);
	if (length == -1)
		return (-1);
	return (1);
}
