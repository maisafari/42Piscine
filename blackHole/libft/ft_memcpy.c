/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:15:22 by mariza            #+#    #+#             */
/*   Updated: 2021/03/01 18:56:57 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**MEMCPY:
**The memcpy() function copies a memory area.
**SYNOPIS:
**#include<string.h>
**void *memcpy(void *dest, const void *src, size_t n);
**DESCRIPTION:
**The memcpy() function copies n bytes from memory area src to memory area dest.
**The memory area must not overlap. Use remove() if the memory areas do overlap.
**RETURN VALUE:
**Returns a pointer o dest.
*/

/*
**We start by creating three variables. The first on will be
**the counter we use to create the loop ad move through the index
**positions of each given string. Because we will be doing our loop
** as long as we are smaller then the given size_t n, we want to make
**sure we make our counter a variable of type size_t as so we can compare
**it to n. Next we create two pointer variables. Set the counter to 0. Cast
**our given parameter strings tinto char pointers an place them inside the
**created auxiliar pointer variables. Afater, we beguin the loop.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*aux_d;
	char	*aux_s;

	aux_d = (char *)dest;
	aux_s = (char *)src;
	if (&aux_d == &aux_s)
		ft_memmove(dest, src, n);
	else if ((aux_d == NULL && aux_s == NULL) || n == 0)
		return (dest);
	else
	{
		while (n--)
			*(aux_d++) = *(aux_s++);
	}
	return (dest);
}
