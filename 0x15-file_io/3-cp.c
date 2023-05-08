#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *file);
void close_file(int fd);

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * @file: A pointer to the name of the file.
 *
 * Return: A pointer to the newly-allocated buffer.
 *
 * Description: This function allocates 1024 bytes for a buffer
 * to read from a file with the specified name. If the allocation fails,
 * an error message is printed and the program exits with status 99.
 */
char *allocate_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 *
 * Description: This function closes the file descriptor
 * passed to it. If an error occurs while closing the file,
 * an error message is printed and the program exits with status 100.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of one file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: This program copies the contents of a file specified
 * by the first argument to another file specified by the second argument.
 * If the argument count is incorrect, the program exits with status 97.
 * If the source file does not exist or cannot be read, the program exits
 * with status 98. If the destination file cannot be created or written to,
 * the program exits with status 99. If either the source or destination file
 * cannot be closed, the program exits with status 100.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);
	src_fd = open(argv[1], O_RDONLY);
	r = read(src_fd, buffer, 1024);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src_fd == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(dest_fd, buffer, r);
		if (dest_fd == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(src_fd, buffer, 1024);
		dest_fd = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(src_fd);
	close_file(dest_fd);

	return (0);
}
