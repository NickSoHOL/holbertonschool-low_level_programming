/*
 * File: 1-alphabet.c
 */
#include <stdio.h>
/**
 * main - Prints "the alphabet in lowercase, followed by a new line.
 */
int main=print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n'); 
}
