/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 20:51:58 by mariza            #+#    #+#             */
/*   Updated: 2021/03/02 20:06:51 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**MEMCCPY
**copy memory area
**#include <string.h>
**void	*memcpy(void *dest, const void *src, int c, size_t n);
**DESCRIPTION
**The memcpy() function copies no more than n bytes from memory
**area src to memory area dest, stopping when the character c is
**found. If the memory area overlap, the results are undefinded
**RETURN VALUE
**The memccpy() returns a pointer to the next character in dest
**after c, or NULL if c was not found in the first n characers of
**src.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	count;
	char	*aux_d;
	char	*aux_s;

	count = 0;
	aux_d = (char *)dst;
	aux_s = (char *)src;
	while (count < n)
	{
		*aux_d = aux_s[count];
		aux_d++;
		if (aux_s[count] == (char)c)
		{
			return (aux_d);
		}
		count++;
	}
	return (NULL);
}
