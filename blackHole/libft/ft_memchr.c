/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 19:14:33 by mariza            #+#    #+#             */
/*   Updated: 2021/03/01 19:00:14 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**MEMCH
**scan memory for a character
**DESCRIPTION
**The memchr() scans the initial n bytes of the memory area pointed to by s for
**the first instance of c. Both c and the bytes of the memory area ponted to by
**are interpreted as unsigned char.
**RETURN VALUE:
**return pointer to the matching byte or NULL if the character does not ocuur in
**the given area
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned const char *)s)[i] == (unsigned char)c)
			return ((void *)&((unsigned const char *)s)[i]);
		i++;
	}
	return (NULL);
}
