#include "main.h"
/**
 * _strlen - count the lenght of a string
 * Return: Returns the lengh of a string in bytes
 * @s: variable that points to address of the string in memory
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
