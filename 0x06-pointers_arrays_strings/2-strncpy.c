#include "main.h"
/**
 * _strncpy - copies src string to dest string
 * Return: Returns pointer to dest string
 * @dest:destination string
 * @src:source string
 * @n:number of bytes to be written to the buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	j = 0;

	if (dest == '\0')
	{
		return (NULL);
	}

	while (src[j] != '\0' && j < n}
	{
		dest[j] = src[j];
		j++;
	}

	*dest = '\0';

	return (dest);
}
