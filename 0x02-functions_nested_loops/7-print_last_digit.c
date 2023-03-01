#include "main.h"
/**
 * print_last_digit - prints the last digit of it's arguments
 * Return: Returns the last digit
 * @n: holds the number to be processed
 */
int print_last_digit(int n)
{
	int lsdit;

	lsdit = n % 10;
	_putchar('48' + lsdit);

	return (lsdit);
}
