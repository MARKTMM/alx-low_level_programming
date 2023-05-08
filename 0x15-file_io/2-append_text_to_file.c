#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: pointer string containing name of the file to append to.
 * @text_content: A pointer to a string containing the text to append.
 *
 * Return: On success, returns 1.
 *         On failure, returns -1 and sets errno appropriately.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	write_result = write(file_descriptor, text_content, length);

	if (file_descriptor == -1 || write_result == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
