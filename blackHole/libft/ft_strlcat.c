/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:35:31 by mbuntubw          #+#    #+#             */
/*   Updated: 2021/03/02 18:22:07 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**STRLCAT:
**Size-bounded string concatenation
**SYNOPSIS:
**#include <string.h>
**size_t      strlcat(char *restrict dst, const char * restrict  src, size_t
**dstsize);
**DESCRIPTION:
**The strlcat() functions concatenates strings. It is designed to be safer, more
**consistent, and less error prone replacement for strncat().
**strlcat() appendss string src to the end of dst. It will append at most
**dstsize - strlen(dst) - 1 characters.It will then NULL-terminare, unless
**destsize is 0 or the original dst string was longer than dstsize.
**In practice this wouldnt happen.
**If dst ans src overlap, the behavior is undefined.
**RETUN VALUES:
**Strlcat() returns the lenght of the string it created. That means the
**length of dst puls the length of src.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len;
	size_t count;

	if (*dst && ft_strlen(dst) >= size)
		return (size + ft_strlen(src));
	len = ft_strlen(dst) + ft_strlen(src);
	count = ft_strlen(dst);
	dst = dst + count;
	while ((count++ < size - 1) && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (len);
}
