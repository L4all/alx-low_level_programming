#include <stdio.h>
/**
* main - print if the number is positive, zero, or negative
*
* Description: using the main function
* this program "programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int num;
for (num = 0 ; num < 10 ; num++)
putchar((num % 10) + '0');
putchar('\n');
return (0);
}
