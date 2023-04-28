#include <stdio.h>

void first(void) __attribute__ ((constructor));
void main_function(void);

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main_function - the entry point of the program
 *
 * Return: Always 0
 */
void main_function(void)
{
	printf("I have just begun to run...\n");
}

int main(void)
{
	main_function();
	return (0);
}
