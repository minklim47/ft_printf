/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:26:07 by climpras          #+#    #+#             */
/*   Updated: 2022/12/23 00:53:11 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_x_len(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	print_x(unsigned int n)
{
	int		len;
	char	c;

	len = find_x_len(n);
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
		print_x(n / 16);
		print_x(n % 16);
	}
	return (len);
}
