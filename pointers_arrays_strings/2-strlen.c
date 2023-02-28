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
char *str = "Hello, world!";
int len = _strlen(str);
printf("The length of \"%s\" is %d\n", str, len);
return (0); 
}
