/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbarbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:45:46 by pbarbaro          #+#    #+#             */
/*   Updated: 2021/01/21 10:46:03 by pbarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*entry;

	entry = *lst;
	if (!del || !lst)
		return ;
	while (entry)
	{
		tmp = entry->next;
		del(entry->content);
		free(entry);
		entry = tmp;
	}
	*lst = 0;
}
