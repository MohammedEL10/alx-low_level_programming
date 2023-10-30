#include <stdlib.h>
#include "main.h"

/**
 * read_textfile.c - function that read a text file and print it to the POSIX 
 * standard output
 * @filename: filename
 * @letters: number of letters to print
 * Return: Number of letters || 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t read_write;

	char *buffer;

	if (filename)
	{
		return (0);
	}
	/* open file*/
	fd = open(filename,O_RDONLY);
	if (fd == -1)
		return(0);

	/* buffer*/
	buffer = malloc(sizeof (char) * letters);
	if (buffer == NULL)
		return(0);

	/* read*/
	pread - read(fd, buffer, letters);
	if(_read == -1)
	{
		free(buffer);
		close(fd);
		return(0);
	}
	/* write*/
	_write = write(STDOUT_FILEND,buffer,_read);
	if (_write == -1)
	{
		free(buffer);
		close(fd);
		return(0);
	}
	close(fd);
	return(_read);
}
