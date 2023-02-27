#include "main.h"
/**
 * _puts - prints its arguments to standard output.
 * @str:the argument to print to stdout.
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
