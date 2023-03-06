#include "main.h"
/**
 * _strchr - search for occurence of a character c in string
 * Return: Returns a pointer to the first occurrence of c
 * @s: string to search
 * @c: character to search
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
