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

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && s[j] != '\0')
	{
		dest[i + j] = src[j];
	}
	if ( i < n)

		dest[j + i] = '\0';
	return (dest);
}


