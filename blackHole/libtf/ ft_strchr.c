/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:07:55 by mbuntubw          #+#    #+#             */
/*   Updated: 2021/02/16 18:01:11 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*STRCHR()
*Locate character in a string
*SYNOPSIS:
#include<string.h>
* char * strchr(const char *s, int c):
*DESCRIPTION
*The strchr() function locates the first ocurrance of c (converted to char) in
*the tring pointed to by s. The terminating null character is considered to be
* part of the string; therefore if c is '\0', the function locates the
*terminating '\0'.
*RETURN VALUE
*the fuction returns a pointer to the located character, or NULL if the
*character does not appear in the string.*/

char	*ft_strchr(const char *s, int c)
{
	size_t	aux;
	size_t	len;
	char	*aux_s;

	aux_s = (char *)s;
	len = ft_strlen(aux_s) + 1;
	aux = 0;
	while (aux++ < len)
		if (aux_s[aux] == (char)c)
			return (&(aux_s[aux]));
	return (NULL);
}
