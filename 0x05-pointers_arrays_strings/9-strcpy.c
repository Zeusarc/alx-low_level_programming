#include "main.h"

/**
 * *_strcpy - ewngknjkdfabnjkfn
 * @dest:g
 * @src: wagef
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = 1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != ('\0');

	return (dest);
}
