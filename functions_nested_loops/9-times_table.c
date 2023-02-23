/*
 * File: 9-times_table.c
 */
#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 **/
void times_table(void)  
{
int num;
for (num = 0; num <= 10; num++)
{
printf("9 x %d = %d\n", num, 9 * num);
}  
}
