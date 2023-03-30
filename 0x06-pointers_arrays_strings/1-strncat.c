#include "main.h"
/**
 * _strncat - concatenates two strings
 * @n: integer parameter
 * @dest: pointer to dest
 * @src: pointer to src
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
