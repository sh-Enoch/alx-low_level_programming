#include "main.h"
/**
 * puts2-prints every other character of a string
 * @s: string pointer
 * Return: void
 */
void puts2(char *str)
{
	int j, k;

	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (k = 0; k < j; k += 2)
	{
		_putchar(str[k]);
	}

	_putchar('\n');


}
