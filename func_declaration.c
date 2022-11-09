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

	len = _strlen(s);
	write(1, s, len);
	return (len);
}
/**
 *
 *
 */
int get_integer(int numbers)
{
	char int_string[] = "          ";
	int i;
	int d_limit = 10;
	int isNegative = 0;
	int d_cnt;

	if (numbers == 0)
	{
		write(1, 0, 1);
		return(1);
	}
	if (numbers < 0)
	{
		write(1, "-", 1);
		numbers = -1 * numbers;
		isNegative++;
	}
	for (i = 9; numbers; i--)
	{
		int_string[i] = '0' + (numbers % 10);
		numbers = numbers / 10;
	}
	i++;
	d_cnt = d_limit - i;
	write(1, &int_string[i], d_cnt);
	return (isNegative + d_cnt);
}

