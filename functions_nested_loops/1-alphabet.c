/*
 * File: 1-alphabet.c
 */
#include <stdio.h>
/**
 * main - Prints "the alphabet in lowercase, followed by a new line.
 */
print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)   
putchar(letter);
putchar('\n');
}
