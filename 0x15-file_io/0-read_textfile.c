#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
  * read_textfile - a function that reads a text file
  * and prints it to the POSIX standard output
  *
  * @filename: The file name to be printed
  * @letters: Numbers of letter to be read.
  *
  * Return: Always (0)
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
	{
		free(buf);
		return (0);
	}
	if (wr != rd)
		return (0);
	return (rd);
}
