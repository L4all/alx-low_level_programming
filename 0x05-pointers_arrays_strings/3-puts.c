#include <stdio.h>
#include "main.h"

/**
* _put - prints a string followed by a new line..
*
* @str: the string to pprint.
*
* Return: void
*/
void _puts(char *str)
{
int num;
for (num = 0; str[num] != '\0'; num++)
{
_putchar(str[num]);
}
_putchar('\n');
}
