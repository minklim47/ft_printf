/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:08:34 by climpras          #+#    #+#             */
/*   Updated: 2022/12/23 00:52:21 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_u_len(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	print_u(unsigned int n)
{
	char	c;
	int		len;

	len = find_u_len(n);
	if (n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		print_u(n / 10);
		c = (n % 10) + '0';
		write(1, &c, 1);
	}
	return (len);
}
