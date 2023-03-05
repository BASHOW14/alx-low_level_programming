#include "main.h"
/**
 *puts_half - prints the last half of a string
 *@str: string to be printed
 */
void puts_half(char *str)
{
	int i;
	int n;

	n = 0;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	n = i / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar(10);
}
