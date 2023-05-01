#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to cpy
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		dest[q] = src[q];
	}

	return (dest);
}
