#include "main.h"
/**
 * string_toupper - converts string to uppercase
 * Return: Returns a pointer to the updated string
 * @s:strint to be coverted.
 */
char *string_toupper(char *s)
{
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			j = s[i] - 32;
			s[i] = j;
		}
		i++;
	
	}
	return (s);
}

