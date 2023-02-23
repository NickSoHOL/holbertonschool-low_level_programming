/*
 * File: 1-alphabet.c
 */
#include "main.h"
/**
 * print_alphabet - prints the english alphabet from a-z.
 **/
void print_alphabet(void)
{
int c;
c = 97;
while (c < 123)
{
_putchar(c);
c++;
}
_putchar('\n');
}
