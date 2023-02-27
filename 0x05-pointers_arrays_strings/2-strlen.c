#include "main.h"
#include <string.h>
/**
 *  _strlen - looking for length of string
 *  @s: input
 *  Return: string lenth
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

