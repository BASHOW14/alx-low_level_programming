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

	while (dest[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];

	}
	if (src[i] != '\0')

		dest[i] = '\0';

	return (dest);
}
