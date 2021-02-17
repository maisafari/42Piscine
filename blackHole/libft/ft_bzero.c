/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuntubw <mbuntubw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:50:59 by mariza            #+#    #+#             */
/*   Updated: 2021/02/17 13:14:03 by mbuntubw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*BZERO()
*SYNOPSIS:
*	#include <string.h>
*	void bzero(void *s, size_t n);
*DESCRIPTION:
*	 The bzero() function erases the data in the n bytes of the memory starting
* at the location pointed to by s, by writing zeros (bytes containing '\0') to
*that area.
*RETURN VALUE
*	None.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
