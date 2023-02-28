#include "main.h"
/**
 * _puts - outputing a string
 * @str: Input
 * Return: output str
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		puts(str[i]);
	}
	_putchar('\n');
}
