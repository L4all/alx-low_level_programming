#include "main.h"
/**
* print_alphabet - entry point
*
* Description: Prints the alphabet with _putchar
*
* Return: void 0
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
return (0);
}
