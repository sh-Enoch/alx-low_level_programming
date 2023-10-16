#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: parameter
 * @c:parameter
 * Return:pointer to the first occurence of character
 */
char *_strchr(char *s, char c)
{
	int b;

	while (1)
	{
		b = *s++;
		if (b == c)
		
			return (s - 1);
		}
		if (b == 0)
		{
			return (NULL);
		}
}
