/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:36:37 by mariza            #+#    #+#             */
/*   Updated: 2021/03/04 19:20:48 by mbuntubw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*element;

	new = NULL;
	if (lst)
	{
		if (!((new) = ft_lstnew(f(lst->content))))
		{
			return (NULL);
		}
		lst = lst->next;
		while (lst)
		{
			if (!((element) = ft_lstnew(f(lst->content))))
			{
				del(new);
				return (NULL);
			}
			ft_lstadd_back(&new, element);
			lst = lst->next;
		}
	}
	return (new);
}
