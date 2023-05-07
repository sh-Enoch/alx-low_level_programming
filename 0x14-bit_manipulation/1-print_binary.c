#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n : takes parameter n
 * Returns :void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int printed = 0;

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
		}

		mask = mask >> 1;
	}

	if (!printed)
	{
		_putchar('0');
	}
}
