/*
 * File: 1-swap.c
 */
#include <stdio.h>
/**
 * 1-swap.c - Swaps the values of two integers.
 *
 **/
void swap_int(int *a, int *b);
{
int temp = *a;
*a = *b;
*b = temp;
}
