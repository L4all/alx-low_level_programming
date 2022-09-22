#include "main.h"
#include <stdio.h>

/**
* _strncat - concatenate two strings but add
* inputted number by bytes
* @dest: string to be appended upon
* @src: string to be completed at the dest
* @n: interger parameter to cmpare index to
* Return: return new concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_lent++] = src[index];

	return (dest)
}
