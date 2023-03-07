#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s : char
 * @b : char
 * @n : unsigned int
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y = 0;

	while (y < n)

	{
		s[y] = b;
		y++;
	}
	return (0);
}
