/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dni.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:00:15 by climpras          #+#    #+#             */
/*   Updated: 2022/12/23 08:06:35 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_len(int n)
{
	int	i;

	i = 0;
	if (n < 0 || n == 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

#include <stdio.h>
int	print_dni(int n)
{
	int		len;

	len = find_len(n);
	printf("len = %d", len);
	if (n < 0)
	{
		write(1, "-", 1);
		if (n == -2147483648)
		{
			write(1, "2", 1);
			print_dni(147483648);
			len += 10;
		}
		else
			print_dni(n * -1);
	}
	else if (n <= 9)
		print_c(n + '0');
	else
	{
		print_dni(n / 10);
		print_c(n % 10 + '0');
	}
	return (len);
}
