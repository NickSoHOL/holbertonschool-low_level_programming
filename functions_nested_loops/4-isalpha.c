/*
 * File: 4-isalpha.c
 */
#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
return (0);
else
return (1);  
}
