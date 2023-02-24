/*
 * File: 10-print_triangle.c
 */
#include "main.h"
/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 **/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
for (int i = 0; i < size; i++)
{
for (int j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
