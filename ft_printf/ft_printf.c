/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:26:55 by climpras          #+#    #+#             */
/*   Updated: 2022/12/22 22:34:42 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(va_list args, char c)
{
	if (c == 'c')
		return (print_c(va_arg(args, int)));
	else if (c == 's')
		return (print_s(va_arg(args, char *)));
	else if (c == 'p')
		return (print_p(va_arg(args, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (print_dni(va_arg(args, int)));
	else if (c == 'u')
		return (print_u(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (print_x(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (print_xyai(va_arg(args, unsigned int)));
	else if (c == '%')
		return (print_c('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += check_format(args, format[i + 1]);
			i++;
		}
		else
		{
			len++;
			write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (len);
}
