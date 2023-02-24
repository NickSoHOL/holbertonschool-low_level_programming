/*
 * File: 9-fizz_buzz.c
 */
#include <stdio.h>
/**
 * main - The “Fizz-Buzz test” is an interview question designed
 *        to help filter out the 99.5% of programming job candidates
 *        who can’t seem to program their way out of a wet paper bag.
 * Return: Always 0.
 */
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if ((num % 3) == 0 && (num % 5) == 0)
printf("FizzBuzz");
else if ((num % 3) == 0)
printf("Fizz");
else if ((num % 5) == 0)
printf("Buzz");
else
printf("%d", num);
if (num == 100)
continue;
printf(" ");
}
printf("\n");
return (0);
}
