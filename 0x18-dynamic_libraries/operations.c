#include "main.h"
/**
* add - adds a and b
* @a: parameter a
* @b: parameter b
* Return: result
*/
int add(int a, int b)
{
	int result = a + b;
	return (result);
}

/**
* sub -  subtracts a and b
* @a: int a
* @b: int b
* Return: result
*/
int sub(int a, int b)
{
	int result = a - b;
	return (result);
}

/**
*mul - function to multiply 
*@a: takes parameter a
*@b: takes parameter b
*Return: result
*/
int mul(int a, int b)
{
        int result = a * b;

        return (result);
}

/**
*div - function to divide
*@a: parameter a
*@b: parameter b
*Return: div
*/
int div(int a, int b)
{
        if (b == 0)
        {
                return (0);
        }

        return (a / b);
}

/**
* mod - returns modulus
*@a: takes parameter a
*@b: takes parameter b
*Return: modulus
*/
int mod(int a, int b)
{
        if (b == 0)
        {
                return (0);
        }

        return (a % b);
}
