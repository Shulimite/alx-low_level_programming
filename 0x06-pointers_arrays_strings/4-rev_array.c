#include "main.h"
/**
 *  reverse_array - revers intiger array
 *  @a: input 1
 *  @n: reverse from n
 *  Return: reversed string
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
