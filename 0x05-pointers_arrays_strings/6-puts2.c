#include "main.h"
/**
 * puts2 - prints every other character
 * @str:stores the address of the character string
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != 0)
	{
		if (str[i] == '\n' || str[i] == '\r' || str[i] == '\t')
		{
			continue;

		}
		else if (i > 0 && str[i] >= 65 && str[i] <= 90)
		{i
			break;
		}
		else
		{
			_putchar(str[i]);

		}	i = i + 2;
	}

	_putchar(10);
}
