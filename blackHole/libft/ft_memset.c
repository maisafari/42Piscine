/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:36:42 by mariza            #+#    #+#             */
/*   Updated: 2021/02/11 18:05:48 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* MENSET - fill memory with a contant type
* SYNOPSIS :
*	#include >string.h>
*	void *memset(void *s, int c , stize_t n)
* DESCRIPTION :
*	The memset() function fills the first n bytes of the memory area
* pointed to by s with constant byte c.
** RETURN VALUE :
*	The memset() function returns a pointer ti the memory area s.
* ATRIBUTES :
*/

/* we start by creating an unsigned char pointer ptr. We use it to hold
*a casted version of the void s parameter. We set ptr eqaual to a unsigned
*char cast version of s. Type casting is used to convert a variable from one
*data type to another data type. We then start the loop. We trust the size of
*n that is passed into it's parameter and it needs to work on a general piece
*of memory, not onley on a '\0' terminated at the end of a string. we derement
*n a while looping to chang the values of s starting at the beguining tp the c
*string value*/

void	*ft_memset(void *s, int c, size_t n)
{
	char *ptr;

	ptr = (char *)s;
	while (n--)
	{
		*ptr++ = (char)c;
	}
	return (s);
}
