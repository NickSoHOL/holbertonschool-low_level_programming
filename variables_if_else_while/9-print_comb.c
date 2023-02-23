/*
 * File: 9-print_comb.c
 */
#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
int num;
for (num = 0; num < 10; num++) {
int num2;
for (num2 = num; num2 < 10; num2++)
{
putchar(num + '0');
putchar(',');
putchar(' ');
putchar(num2 + '0');
if (num != 9 || num2 != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
