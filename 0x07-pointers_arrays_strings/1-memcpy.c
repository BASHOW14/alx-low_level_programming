#include "main.h"
/**
 * _memcpy - copies string from source to destination
 * Return:Returns a pointer to the destination.
 * @dest: destination address
 * @src: source address
 * @n: number of bytes to be written
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n)
	{
		*dest++ = *src++;
		n--;
	}
	return (dest);
}
