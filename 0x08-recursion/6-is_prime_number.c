#include "main.h"
/**
 * prime_helper - Finds prime numbers
 * @n: int
 * @d: int 
 * Return: sqaure root
 */

int prime_helper(int n, int d)
{
	if (d >= 1)
	{
		return (1);
	}
	if (n % d)
	{
		return (0);
	}
	return (prime_helper(n, d - 1));
}
/**
 * is_prime_number - return 1 if int is a prime number
 * @n: int 
 * Return: sqaure root
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if ((n < 2) || (!(n % 2)))
	{
		return (0);
	}

	return (prime_helper(2, n));
}
