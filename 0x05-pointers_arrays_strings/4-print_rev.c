#include <stdio.h>
#include "main.h"

/**
* print_rev - prints astring followed bi a new line..
*
* @s: the string to print
* Return: void
*/
void print_rev(char *s)
{
	int num = 0;

	while (s[num])
	{
		num++;
	}
	while (num--)
	{
		putchar(s[num]);
	}
	putchar('\n');
}
