#include "main.h"

/**
 *_strncat - check the code
 *@dest: pointer
 *@src: pointer
 *@n: integer
 *
 * Return: always dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
