/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbarbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 13:39:40 by pbarbaro          #+#    #+#             */
/*   Updated: 2021/01/25 17:05:28 by pbarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i] && needle[j] && len > 0)
	{
		j = 0;
		if (needle[j] != haystack[i])
		{
			i++;
			len--;
		}
		while (needle[j] == haystack[i] && len > 0 && haystack[i])
		{
			j++;
			i++;
			len--;
		}
	}
	if (needle[j] == '\0')
		return ((char*)haystack + (i - j));
	return (NULL);
}
