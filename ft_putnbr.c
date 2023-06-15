/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:41:37 by abourdon          #+#    #+#             */
/*   Updated: 2023/04/05 11:02:43 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len, int fd)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", len, fd);
	else
	{
		if (n < 0)
		{
			ft_putchar('-', len, fd);
			n = n * -1;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10, len, fd);
		}
		ft_putchar((n % 10) + 48, len, fd);
	}
}
