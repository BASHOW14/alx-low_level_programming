#include "main.h"
/**
 * _strncat - concatenate n bytes from source to destination string
 * Return: Returns a pointer to the destination address.
 * @dest: destination address
 * @src: source address
 * @n: number of bytes to read from src
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	while (*src && n--)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
