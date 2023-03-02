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

	for (i = 0; i < n && s[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
