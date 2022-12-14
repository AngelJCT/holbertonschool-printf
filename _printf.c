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
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			while (format[++i] == ' ')
			{}
			switch (format[i])
			{
				case 'c':
					cnt += get_char(va_arg(ptr, int));
					break;
				case 's':
					cnt += get_string(va_arg(ptr, char *));
					break;
				case '%':
					cnt += write(1, &format[i], 1);
					break;
				case 'd': case 'i':
					cnt += get_integer(va_arg(ptr, int));
					break;
				case '\0':
					return (-1);
				default:
					cnt += write(1, &format[--i], 1);
			}
		}
		else
		{
			cnt += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(ptr);
	return (cnt);
}
