/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbarbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 10:58:25 by pbarbaro          #+#    #+#             */
/*   Updated: 2021/01/19 10:26:08 by pbarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		temp;
	char	*s;

	i = 1;
	if (n < 0)
		i++;
	temp = n;
	while (temp /= 10)
		i++;
	if (!(s = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	s[i] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
		s[0] = '-';
	while (--i >= 0 && n != 0)
	{
		s[i] = ((n >= 0) ? 1 : -1) * (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}
