#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src :  from memory area
 * @dest :  to memory area
 * @n : function that copies
 * Return:  a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		src[j] = dest[j];
		j++;
	}
	return (dest);
}
