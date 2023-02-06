#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
  * create_file - Create a function that creates a file.
  *
  * @filename: The file name to be printed
  * @text_content: Numbers of letter to be read.
  *
  * Return: Always (0)
  */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (0 == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
