/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbarbaro <pbarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:29:18 by pbarbaro          #+#    #+#             */
/*   Updated: 2021/02/12 12:50:06 by pbarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	init_list(t_struct *list)
{
	list->flags_min = 0;
	list->flags_zero = 0;
	list->width = 0;
	list->prec = -1;
	list->type = '0';
	list->len = 0;
	list->is_int_neg = 0;
}

int		ft_printf(const char *str, ...)
{
	va_list		args;
	 	list;
	int			res;
	int			i;

	res = 0;
	i = -1;
	va_start(args, str);
	while (str[++i] != '\0')
	{
		if (str[i] == '%')
		{
			ft_memset(&list, 0, sizeof(list));
			init_list(&list);
			parse(&i, str, args, &list);
			res += list.len;
		}
		else
		{
			write(1, &str[i], 1);
			res++;
		}
	}
	va_end(args);
	return (res);
}
