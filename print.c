#include "main.h"
#include <stdarg.h>
/**
 * _printf - produces output aacording to format
 * @format:the first arguement
 * Return:returns the number of character to be counted
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int count = 0;

	va_start(ptr, format);
	while (*format)
	{
		if (*format != '\0')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
					count++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(ptr, int);
				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(ptr, char *);
				int length = strlen(str);

				write(1, str, str_len);
				count++
			}
			format++;
		}
	}
	va_end(ptr);
	return(count);
}

