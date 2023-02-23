/*
 * File: 4-isalpha.c
 */
#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic.
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
