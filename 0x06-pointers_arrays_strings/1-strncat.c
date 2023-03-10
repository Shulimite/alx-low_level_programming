#include "main.h"
/**
 * _strncat - string conatination
 * @dest: string 1
 * @src: string 2
 * @n: maximum number of characters to be appended
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
