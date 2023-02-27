#include "main.h"
/**
 * rev_string - reverse its argument string
 * @s:stores the address of the string in memory.
 */
void rev_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	char temp[i];

	int j;
	int k = i;

	j = 0;

	while (j < k)
	{
		temp[j] = s[i];
		j++
		i--;
	}
	j = 0;

	while (s[i] != 0)
	{
		s[i] = temp[j];
		i++;
		j++;
	}
}
