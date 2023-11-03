#include "main.h"

/**
 * read_textfile - Reads text file
 * @filename: The name of the file
 * @letters: The number of letters being printed
 * Return: True always 1 else False 0
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int file;
	ssize_t nrd, nwr;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	nrd = read(file, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(file);
	free(buffer);

	return (nwr);
}
