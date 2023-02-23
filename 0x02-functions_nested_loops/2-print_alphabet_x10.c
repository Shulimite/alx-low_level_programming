#include "main.h"
/**
 * main - Entry point
 * Description: loop for running ten times
 * Return: Always (0)
 */

void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar(a);
	}
}
