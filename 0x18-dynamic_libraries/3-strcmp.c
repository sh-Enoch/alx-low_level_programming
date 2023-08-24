#include "main.h"
/**
 * _strncmp - compares two strings
 * @s1: parameter
 * @s2:parameter 
 * Return: less than 0 if s1 < s2 ,0 if s1 == s2,more than 0 if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
