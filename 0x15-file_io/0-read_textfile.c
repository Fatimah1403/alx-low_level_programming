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
	int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}
