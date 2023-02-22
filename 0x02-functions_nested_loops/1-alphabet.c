#include "main.h"
/**
 * main - Entry point
 * printing lowercase alphabet
 * Return: Always (0)
 */

void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
