/*
 * File: 1-swap.c
 */
#include <stdio.h>
/**
 * swap.c - Swaps the values of two integers.
 * @a: The 1st integer to be swapped.
 * @b: The 2nd integer to be swapped.
 **/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
