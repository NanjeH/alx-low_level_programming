#include "main.h"

/**
 * _strchr -  function that locates a character in a string
 * @c :  pointer
 * @s : the string
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}