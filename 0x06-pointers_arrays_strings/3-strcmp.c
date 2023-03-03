#include "main.h"
/**
 * _strcmp - compares two string
 * Return: Returns an integer value showing the result;
 * @s1: first string
 * @s2: second string
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	int s1res;
	int s2res;

	s1res = 0;
	s2res = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1res += s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s2res += s2[j];
	}
	if (s1res > s2res)
	{
		return (15);
	}
	else if (s1res < s2res)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
