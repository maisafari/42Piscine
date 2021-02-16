/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:29:51 by mbuntubw          #+#    #+#             */
/*   Updated: 2021/02/16 17:50:27 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*STRRCHR()
*Locate the characteer in string
*SYNOPSIS:
*char * strrchr(const char *s, int c);
*DESCRIPTION:
*The strrchr() function locates the last ocurrance of c(converted to char)
*in the string; if c is equal to '\0' the function must locate the
*terminating '\0'.
*RETUTN VALUE:
*The function returns a pointer to the located character, or NULL if the
*character does not appear*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*aux_s;

	aux_s = (char *)s;
	len = ft_strlen(aux_s) + 1;
	while (len--)
		if (aux_s[len] == (char)c)
			return (&(aux_s[len]));
	return (NULL);
}
