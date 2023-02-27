#include "main.h"
/**
 * rev_string - reverse its argument string
 * @s:stores the address of the string in memory.
 */
void rev_string(char *s)
{
	int i;

	i = 0;

	int k;

	int j;

	char temp;

	while (s[i] != 0)
	{
		i++;
	}
	
	j = i;
	k = 0;

	while (k < j)
	{
		while (i > k)
		{
			tmp = s[i];
			s[i] = s[i] - 1;
			s[i] - 1 = tmp;
			i--;
		}
		i = j;
		k++;
	}
}
