#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 *Return: Always 0 (success)
 *
 */

void print_alphabet_x10(void)
{
char ch;
char h;

for (h = 1 ; h <= 10 ; h++)
{

for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');


}
}



