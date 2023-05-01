#include "main.h"

/**
 * *_strchr - locates character in a string
 * @s: string
 * @c: char
 * Return: a pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
		if (x == 0)
		{
			return (NULL);
		}
	}
}
