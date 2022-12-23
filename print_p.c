/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:49:45 by climpras          #+#    #+#             */
/*   Updated: 2022/12/23 08:15:18 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_p_len(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

void	hex(unsigned long n)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else if (n < 16)
	{
		c = n + 87;
		write(1, &c, 1);
	}
	else if (n >= 16)
	{
		hex(n / 16);
		hex(n % 16);
	}
}

int	print_p(unsigned long n)
{
	int	len;

	len = find_p_len(n);
	print_s("0x");
	len += 2;
	hex(n);
	return (len);
}
