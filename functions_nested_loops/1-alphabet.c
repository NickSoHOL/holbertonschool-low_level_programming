/*
 * File: 1-alphabet.c
 */
#include "main.h"
/**
 * main - Prints "the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)   
putchar(letter);
putchar('\n');
}
