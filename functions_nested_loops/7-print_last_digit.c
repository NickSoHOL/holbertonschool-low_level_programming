/*
 * File: 7-print_last_digit.c
 */
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 * Return: Value of the last digit.
 **/
int print_last_digit(int n)
{
int last_digit = abs(num) % 10;
printf("Last digit of %d is %d\n", num, last_digit);
return last_digit;
}
