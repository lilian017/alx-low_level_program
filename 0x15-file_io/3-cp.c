#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * code97 - checks correct argument
 * @argc: arguments
 * Return: void
 */
void code97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * code98- checks if the existing file is readable
 * @check: checks if true or false
 * @file: file_from name
 * @fn_from: file descriptor of file_from, or -1
 * @fn_to: descriptor of file_to ot -1
 * Return: void
 */
void code98(ssize_t check, char *file, int fn_from, int fn_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",file);
		if (fn_from != -1)
			close(fn_from);
		if (fn_to != -1)
			close(fn_to);
		exit(98);
	}
}
/**
 * code99 - checks files created and can be written on
 * @check: checks if true or false
 * @file: file to name
 * @fn_from: file descriptor of file_from, or _1
 * @fn_to: file descriptor of file_to, or -1
 * Return: void
 */
void code99(ssize_t check, char *file, int fn_from, int fn_to)
{
	if(check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't rite to %s\n", file);
		if (fn_from != -1)
			close(fn_from);
		if (fn_to != -1)
			close(fn_to);
		exit(99);
	}
}
/**
 * code100 - checks file descriptors are closed properly
 * @check: checks if true or false
 * @fn: file descriptor
 * Return: void
 */
void code100(int check, int fn)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fn%d\n", fn);
		exit(100);
	}
}
/**
 * main - copies content of file to another
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fn_from, fn_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	code97(argc);
	fn_from = open(argv[1], O_RDONLY);
	code98((size_t)fn_from,argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP |S_IROTH;
	fn_to = open(argv[2], O_WRONLY |O_CREAT | O_TRUNC, file_perm);
	code99((ssize_t)fn_to, argv[2], fn_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fn_from, buffer, 1024);
		code98(lenr,argv[1], fn_from, fn_to);
		lenw = write(fn_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		code99(lenw, argv[2], fn_from, fn_to);
	}
	close_to = close(fn_to);
	close_from = close(fn_from);
	code100(close_to, fn_to);
	code100(close_from, fn_from);
	return (0);
}
