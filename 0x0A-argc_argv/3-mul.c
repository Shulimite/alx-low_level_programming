#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiple of n
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
