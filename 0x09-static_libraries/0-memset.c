#include "main.h"
/**
 * _memset - empty Function
 * @s: parameter
 * @b:parameter
 * @n : parameter
 * Return : void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
