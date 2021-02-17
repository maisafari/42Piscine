/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 19:37:14 by mariza            #+#    #+#             */
/*   Updated: 2021/02/16 21:44:17 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*MEMCMP
*Compares memory areas
*SYNOPSIS
*#inclue <string.h>
*int memcmp(const void *s1, const void *s2, size_t n);
*DESCRIPTION
*The memcmp() function compares the first n bytes (each
*interpreted as unsigned char) of the memory areas s1 and s2.
*RETURN VALUE
*The memcmp() function returns an integer less than, equal to,
*or greater than zero if the first n bytes of s1 is found,
*respectively, to be less than, to match, or to be greater
*than he first n bytes of s2.
* For a nonzero return value, the sign is interpreted by the
* difference between the first pair of byts (interpreted as
*unsigned char) that differ in s1 and s2.
*If n is zero, the return value is zero.*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;
	size_t			count;

	count = 0;
	aux_s1 = (unsigned char *)s1;
	aux_s2 = (unsigned char *)s2;
	while (count < n)
	{
		if (aux_s1[count] != aux_s2[count])
		{
			return (aux_s1[count] - aux_s2[count]);
		}
		count++;
	}
	return (0);
}
