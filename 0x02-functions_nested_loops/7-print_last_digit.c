#include "main.h"
/**
 * print_last_digit - output last digit of a number
 * @n:int we get last number from
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
		a *= -1;

	_putchar(a + '0');
	return (a);
}
