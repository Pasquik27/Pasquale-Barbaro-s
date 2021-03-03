/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbarbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:51:04 by pbarbaro          #+#    #+#             */
/*   Updated: 2021/02/10 14:53:00 by pbarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrf(int n, int *p)
{
	if (n < 0)
	{
		*p = *p + 1;
		ft_putchar('-');
		n = -n;
	}
	if (n == -2147483648)
	{
		ft_putchar('2');
		n %= 1000000000;
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbrf((n / 10), p);
		ft_putnbrf((n % 10), p);
	}
	else
	{
		*p = *p + 1;
		ft_putchar(n + '0');
	}
}