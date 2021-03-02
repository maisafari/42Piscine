/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:42:19 by mariza            #+#    #+#             */
/*   Updated: 2021/03/01 18:43:25 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**STRLCPY
**size_bouded string copyiong concatenation
**SINOPSIS
**#include <bsd/string.h>
**size_t strlcpy(char *dst, const char *src, size_t size);
**The strlcpy() function copy is designed to be safer,
**less error prone replacement for strncpy. It takes the
**full size of src and NULL terminates the rusting dest
**as long as the size is greater thepan 0.
**It copies up to size - 1 characters from the NULL
**terminated src to dst, NULL termi
**RETURN VALUE
**Return the total length of the string it created,
**length of sorce
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	char	*ptrs;
	char	*ptrd;

	if (dst == NULL)
		return (0);
	ptrs = (char *)src;
	ptrd = (char *)dst;
	len = ft_strlen(ptrs);
	if (size > 0)
	{
		while (--size && *ptrs)
			*ptrd++ = *ptrs++;
		*ptrd = '\0';
	}
	return (len);
}
