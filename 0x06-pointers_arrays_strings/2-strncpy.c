#include "main.h"
/**
 * _strncpy - funtion to copy string
 * @dest: input 1
 * @src: input 2
 * @n: copy from n
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

