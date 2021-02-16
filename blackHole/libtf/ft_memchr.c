/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 19:14:33 by mariza            #+#    #+#             */
/*   Updated: 2021/02/13 19:35:21 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*MEMCH
*scan memory for a character
*DESCRIPTION
*The memvhr() scans the initial n bytes of the memory area pointed to by s for the
*first instance of c. Both c and the bytes of the memory area ponted to by s are
interpreted as unsigned char.
*RETURN VALUE:
*return pointer to the matching byte or NULL if the character does not ocuur in the
* given area*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *aux_s;

	aux_s = (unsigned char *) s;
	while (n--)
	{
		if (aux_s[n] == (unsigned char)c)
		{
			return((char *)(s + n));
		}
	}
	return(NULL);
}
