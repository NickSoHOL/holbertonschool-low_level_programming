/*
 * File: 9-fizz_buzz.c
 */
#include "main.h"
/**
 * main - The “Fizz-Buzz test” is an interview question designed
 *        to help filter out the 99.5% of programming job candidates
 *        who can’t seem to program their way out of a wet paper bag.
 * Return: Always 0.
 */
int main(void)
{
for (int i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return 0;
}
