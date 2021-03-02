/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:39:15 by mariza            #+#    #+#             */
/*   Updated: 2021/03/01 18:54:00 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**MEMMOVE
**copy memory area
**SYNOPSIS
**#include <string.h>
**void	*memmove(void *dest, const void *src, size_t);
**DESCRIPTION
**The memmove() function copies n bytes from memory area
**src to memory area des. The memory areas my overlap:
**copying takes place as though the bytes in src are
**first copied into a temporary array that does not
**overlap src or dest, and the bytes are then copied
**from the temporay array to dest.
**RETURN VALUE
**The memmove() returns a pointer to dest
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptrs;
	char	*ptrd;
	size_t	count;

	ptrs = (char *)src;
	ptrd = (char *)dst;
	count = 0;
	if (ptrd > ptrs)
		while (len-- > 0)
			ptrd[len] = ptrs[len];
	else if ((ptrd == NULL && ptrs == NULL) || len == 0)
		return (dst);
	else
		while (count < len)
		{
			ptrd[count] = ptrs[count];
			count++;
		}
	return (dst);
}
