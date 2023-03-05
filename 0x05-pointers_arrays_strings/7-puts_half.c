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

	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}

	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar(10);
}
