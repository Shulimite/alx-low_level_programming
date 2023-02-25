#include "main.h"
/**
 * _isupper - cheking for uppercase char
 * @c: cheking from c
 * Return: 1 if c else 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
