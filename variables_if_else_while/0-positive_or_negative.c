/*
 *File: 0-positive_or_negative.c
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
 **/
int main(void)
{
srand(time(NULL));
int n = rand() % 201 - 100;
printf("%d ", n);
if (n > 0) {
printf("is positive\n");
} else if (n < 0) {
printf("is negative\n");
} else {
printf("is zero\n");
}
return 0;
}
