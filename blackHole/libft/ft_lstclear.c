/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:05:35 by mariza            #+#    #+#             */
/*   Updated: 2021/03/01 19:09:14 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *aux_lst;

	if (lst)
	{
		while (*lst)
		{
			aux_lst = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = aux_lst;
		}
	}
}
