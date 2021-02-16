/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:39:15 by mariza            #+#    #+#             */
/*   Updated: 2021/02/13 19:12:44 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*MEMMOVE
** copy memory area
*SYNOPSIS
*#include <string.h>
*void	*memmove(void *dest, const void *src, size_t);
*DESCRIPTION
*The memmove() function copies n bytes from memory area
src to memory area des. The memory areas my overlap:
*copying takes place as though the bytes in src are
*first copied into a temporary array that does not
*overlap src or dest, and the bytes are then copied
*from the temporay array to dest.
*RETURN VALUE
*The memmove() returns a pointer to dest*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *tmp;

	if (!(tmp = (char*) malloc(n * sizeof(char))))
	{
		return(NULL);
	}
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return((char*)dest);
}