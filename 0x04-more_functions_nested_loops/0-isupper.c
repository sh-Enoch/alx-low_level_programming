#include "main.h"
/**
 * _isupper - uppercase
 * @c: takes parameter c
 * Return: 1 if uppercase,0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
