#include "main.h"
/**
 * main - prints _putchar followed by a new line
 * Return: always 0
 */
int main(void)
{
	char a[] = "_putchar";
	int c = 0;

	while (a[c] != '\0')
	{
		_putchar(a[c]);
		c++;
	}
	_putchar(10);

	return (0);
}
