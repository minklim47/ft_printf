/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:15:48 by climpras          #+#    #+#             */
/*   Updated: 2022/12/23 08:15:41 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	print_c(int c);
int	print_s(char *str);
int	print_p(unsigned long n);
int	print_dni(int n);
int	print_u(unsigned int n);
int	print_x(unsigned int n);
int	print_xyai(unsigned int n);

#endif
