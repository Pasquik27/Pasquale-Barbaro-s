/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbarbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:40:07 by pbarbaro          #+#    #+#             */
/*   Updated: 2021/02/10 14:40:12 by pbarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	int		sign;
	long	num;

	sign = 1;
	num = 0;
	i = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		if (num * sign < -2147483648)
			return (0);
		else if (num * sign > 2147483647)
			return (-1);
		i++;
	}
	return ((int)(num * sign));
}
