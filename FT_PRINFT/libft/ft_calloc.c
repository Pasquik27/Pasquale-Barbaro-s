/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbarbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:40:49 by pbarbaro          #+#    #+#             */
/*   Updated: 2021/02/10 14:41:06 by pbarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	sum;
	void	*ptr;

	sum = count * size;
	ptr = malloc(sum);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, sum);
	return (ptr);
}
