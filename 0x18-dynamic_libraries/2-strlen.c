#include "main.h"
/**
 * _strlen - length of string
 * @s: takes parameter s
 * Return: length
 */
int _strlen(char *s)
{
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	return (k);
}
