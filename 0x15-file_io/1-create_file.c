#include "main.h"

/**
 * create_file - Crets a file.
 * @filename: A pointer of the name to the fle to crate.
 * @text_content: A ponter to a strng to wrte to the file.
 *
 * Return: function fails 1. or else 1.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_result = write(file_descriptor, text_content, length);

	if (file_descriptor == -1 || write_result == -1)
	{
		return (-1);
	}

	close(file_descriptor);

	return (1);
}
