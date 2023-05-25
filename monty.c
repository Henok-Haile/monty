#include "monty.h"

/**
 * main - the monty byte code interpreter
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: void
 */
int main(int ac, char **av)
{
	FILE *fd;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(av[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

	getline
	fclose(fd);
	return (0);
}
