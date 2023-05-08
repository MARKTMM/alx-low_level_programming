#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its content to stdout.
 * @file_path: The path of the text file to read.
 * @max_chars: The maximum number of characters to read from the file.
 *
 * Return: characters read and printed, or 0 if there was an error.
 */
ssize_t read_textfile(const char *file_path, size_t max_chars)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t chars_read;
	ssize_t chars_written;

	file_descriptor = open(file_path, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * max_chars);
	chars_read = read(file_descriptor, buffer, max_chars);
	chars_written = write(STDOUT_FILENO, buffer, chars_read);

	free(buffer);
	close(file_descriptor);

	return (chars_written);
}
