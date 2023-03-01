#include "main.h"
/**
 * _strcat - two string concatination
 * @dest: first string
 * @src: second string
 * Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
