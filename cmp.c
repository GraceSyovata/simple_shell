#include "shell.h"
/**
 * _strncmp - for comparing n bytes in str1 and str2
 * @str1: 1st string for comparison
 * @str2: second string for comparison
 * @n: no of bytes for checking
 * Return: > 0 if str2 is less than str1, < 0 if str1 < str2,
 * 0 is str1 is equivalent to str2
 */

int _strncmp(char *str1, char *str2, int n)
{
	if (!n)
		return (0);
	if (*str1 == *str2)
		return (*str1 ? _strncmp(str1 + 1, str2 + 1, n - 1) : 0);
	if (*str1)
		return (1);
	if (*str2)
		return (-1);
	return (*str1 - *str2);
}
