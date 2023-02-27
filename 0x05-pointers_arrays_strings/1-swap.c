#include "main.h"
/**
 * swap_int - Swapping two  ints
 * @a: first int
 * @b: secont int
 * Return: velue of swaped ints
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
