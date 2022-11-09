#include "main.h"
/**
 *_printf-implementation of printf function
 *@format: pointer to arguments
 *Return: arguments from each format specifiers
 *
 */
int _printf(const char *format, ...)
{
	int cnt = 0, i = 0;
	va_list ptr;

	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					cnt += get_char(va_arg(ptr, int));
					break;
				case 's':
					cnt += get_string(va_arg(ptr, char *));
					break;
				case 'i': case 'd':
					cnt += get_integer(va_arg(ptr, int));
					break;
				case '%':
					write(1, &format[i], 1);
					cnt++;
					break;
				case ' ': case '\0':
					return (-1);
			}
		}
		else
		{
			write(1, &format[i], 1);
			cnt++;
		}
		i++;
	}
	va_end(ptr);
	return (cnt);
}
