#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: takes parameter a which is an integer and a pointer
 * @b: takes parameter b which is an integer pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
