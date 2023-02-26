#include "main.h"
/**
 * print_sign - checks to see weither n is positive, negative or zero
 * Return: Returns 1 if n is positive -1 if it's negative 0 otherwise
 * @n: stores the number to be checked.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
