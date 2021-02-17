/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuntubw <mbuntubw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:35:31 by mbuntubw          #+#    #+#             */
/*   Updated: 2021/02/17 13:32:40 by mbuntubw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*STRLCAT:
*Size-bounded string concatenation
*SYNOPSIS:
*   #include <string.h>
*   size_t      strlcat(char *restrict dst, const char * restrict  src, size_t
* dstsize);
*DESCRIPTION:
*The strlcat() functions concatenates strings. It is designed to be safer, more
*consistent, and less error prone replacement for strncat().
*strlcat() appendss string src to the end of dst. It will append at most dstsize
*- strlen(dst) - 1 characters.It will then NULL-terminare, unless destsize is 0
*or the original dst string was longer than dstsize. In practice this wouldnt
*happen.
*If dst ans src overlap, the behavior is undefined.
*RETUN VALUES:
*Strlcat() returns the lenght of the string it created. That means the length of
* dst puls the length of src.*/

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstlen)
{
	char	*result;
	size_t	s_len;
	size_t	len;
	size_t	aux;

	s_len = ft_strlen((char *)src);
	if (!(result = (char *)malloc((dstlen + s_len) * sizeof(char))))
		return (-1);
	len = 0;
	if (len < dstlen)
		while (dst[len++] != '\0')
			result[len] = dst[len];
	aux = 0;
	while (src[aux++] != '\0' && len++ < (dstlen + s_len))
		result[len] = src[aux];
	result[len] = '\0';
	dst = (char *restrict)result;
	free(result);
	return (len);
}
