#include "main.h"
#include <stdio.h>

/**
* _strncat - concatenates the string pointer to by @scr
* @dest: The destination string that will be appended
* @src: source string to be concatenated upon
*
* Return: A pointer to a resulting string @dest
*/

char *_strncat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_lent++] = src[index];

	return (dest)
}
