#include "main.h"
/**
 * main - funtion for last digit
 * print out funtion
 * Return: value of last digit
 */
int print_last_digit(int num)
{
	ld = ld < 0 ? -1 * ld : ld;
	_putchar(ld + '0');
	return (ld < 0 ? -1 * ld : ld);
}

