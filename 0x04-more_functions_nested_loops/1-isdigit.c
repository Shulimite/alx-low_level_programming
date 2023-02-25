#include "main.h"
/**
 * _isdigit - checker funtion for digits
 * @c: char that is to be checked
 * Return: 1 else 0
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

