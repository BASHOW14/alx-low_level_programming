#include "main.h"
/**
 * puts2 - prints every other character
 * @str:stores the address of the character string
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0' && i < 416)
	{
		_putchar(str[i]);
		i = i + 2;
	}

	_putchar(10);
}
