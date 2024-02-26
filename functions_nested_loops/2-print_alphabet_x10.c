#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int d;
char c;
for (d = 0; d < 10; d++)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}

}
