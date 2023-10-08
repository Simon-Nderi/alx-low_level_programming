#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: A pointer to the first
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s == c)
	return (s);
	s++;
	}
	if (c == '\0')
	return (s);
	return (NULL);
}
