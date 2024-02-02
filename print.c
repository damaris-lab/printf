#include "main.h"
/**
 * _printf - produces output aacording to format
 * @format:the first arguement
 * Return:returns the number of character to be counted
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0;

	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == 's')
				count = print_str(arg);
			else if (*format == 'c')
				count = print_char(arg);
			else if (*format == 'i' || *format == 'd')
				count = print_num(arg);
			else
			{
				write(1, format -1, 2);
				count += 2;
			}
		}
		format++;
	}
	va_end(arg);
	return (count);
}
/**
 * print_str - prints string character on stdout
 * @arg:pointer to first arguement
 * Return:returni str count
 */
int print_str(va_list arg)
{
	char *str;
	int count;

	count = 0;
	str = va_arg(arg, char *);
	write(1, str, strlen(str));
	count += strlen(str);
	return (count);
}
/**
 * print_char - prints character on stdout
 * @arg: pointer to arguements
 * Return:return c
 */
int print_char(va_list arg)
{
	int count;
	char c;

	count = 0;
	c = va_arg(arg, int);
	write(1, &c, 1);
	count += 1;
	return (count);
}
/**
 * print_num - prints an integer
 * @arg:pointer to arguement
 * Return:return int
 */
int print_num(va_list arg)
{
	int count, num, ret;
	char array[20];

	count = 0;
	num = va_arg(arg, int);
	ret = sprintf(array, "%d", num);
	if (ret > 0)
	{
		write(1, array, strlen(array));
		count += strlen(array);
	}
	return (count);
}




