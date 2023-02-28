#include "main.h"
/**
 * rev_string - reverse its argument string
 * @s:stores the address of the string in memory.
 */
void rev_string(char *s)
{
	int i;

	int j;

	char temp;

	i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	
	j = 0;

	while (s[j] != 0)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
		j++;
	}
}
