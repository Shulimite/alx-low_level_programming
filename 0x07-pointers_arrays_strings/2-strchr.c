#include "main.h"
/**
 * _strchr - locate char in a str
 * @s: char
 * @c:char
 * Return: s or null
 */

char *_strchr(char *s, char c)
{
	while (s[0] != '\0')
	{
		if (s[0] == c)
			return (s);
		else if (s[1] == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
