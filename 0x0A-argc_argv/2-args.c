#include "main.h"
#include <stdio.h>
/**
 * main - prints arguments
 * @argc: char pointer
 * @argv: An array of size argc
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
