/*
 * File: 6-print_line.c
 */
#include "main.h"
/**
 * print_line - Draws a straight line using the character _.
 * @n: Prinft to be character.
 **/
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
