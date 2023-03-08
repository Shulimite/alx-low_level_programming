#include "main.h"
/**
 * _strstr - substring funtion
 * @needle: pointer
 * @haystack: pointer
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; haystack[0]; haystack++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
			;
		if (!(needle[i]))
			return (haystack);
	}
	return (0);
}
