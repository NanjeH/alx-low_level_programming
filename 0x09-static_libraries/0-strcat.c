#include "main.h"

/**
 * _strcat - concat two string
 * @dest: char
 * @src: char
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
while (*src != '\n')
{
	*dest = *src;
	dest++;
	src++;
}
*dest = '\0';
	return (s);
}