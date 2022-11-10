#include "main.h"
/**
 *get_char-print given string
 *@c: pointer to string
 *Return: character
 */
int get_char(char c)
{
	write(1, &c, 1);
	return (1);
}
/**
 *get_string-find string length
 *@s: pointer to string
 *Return: string length
 */
int get_string(char *s)
{
	int len;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	len = _strlen(s);
	write(1, s, len);
	return (len);
}
/**
 *get_integer-print integers for format specifier
 *@numbers: integers
 *Return: numbers amount
 */
int get_integer(int numbers)
{
	char int_string[] = "           ";
	int i;
	int d_limit = 11;
	int num_duplicate = numbers;
	int d_cnt;

	if (numbers == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	for (i = 10; numbers != 0; i--)
	{
		int digit = numbers % 10;
		if (digit < 0)
		{
			digit = -1 * digit;
		}
		int_string[i] = '0' + digit;
		numbers = numbers / 10;
	}
	if (num_duplicate < 0)
	{
		int_string[i] = '-';
	}
	else
	{
		i++;
	}
	d_cnt = d_limit - i;
	write(1, &int_string[i], d_cnt);
	return (d_cnt);
}
