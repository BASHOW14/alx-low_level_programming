#include "main.h"
/**
 * jack_bauer -prints every minutes of jack bauer
 */
void jack_bauer(void)
{
	int i;

	int j;

	int k;

	int l;

	i = 48;

	while (i < 51)
	{
		j = 48;

		while (j < 52)
		{
			k = 48;

			while (k < 54)
			{
				l = 48;

				while (l < 58)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
