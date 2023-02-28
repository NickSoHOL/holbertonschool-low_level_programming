/*
 * File: 2-strlen.c
 */
#include <stdio.h>
/**
 * main - function that returns the length of a string.
 *
 * Return 0
 **/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
