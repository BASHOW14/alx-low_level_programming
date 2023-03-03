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

	while (*src &&  n--)
	{
		*dest = *src;
	}

	*dest = '\0';

	return (dest);
}
