#include "main.h"
/**
 * print_last_digit - prints the last digit of it's arguments
 * Return: Returns the last digit
 * @n: holds the number to be processed
 */
int print_last_digit(int n)
{
	int lsdit;
 
	if (n < 0)
	{
		n = n + n + n;
	}
	lsdit = n % 10;
	_putchar('0' + lsdit);

	return (lsdit);
}
