#include "main.h"
/**
 * _abs - computes the absolute value of it's argument
 * Return: Returns the the number without minus sign
 * @n: this is the number to compute
 */
int _abs(int n)
{
	int abs;

	if (n < 0)
	{
		abs = n + n + n;
		return (abs);
	}
	else
	{
		return (n);
	}
}
