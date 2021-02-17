/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuntubw <mbuntubw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:52:02 by mbuntubw          #+#    #+#             */
/*   Updated: 2021/02/17 13:33:13 by mbuntubw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*STRNSTR:
*Locate a substring in a string
*SYNOPSIS:
*#include <string.h>
*char	*strstr(const char *haystack, const char *needle, size_t len);
*DESCRIPTION:
*The strnstr() function locates the first ocurrance of the NULL terminated
*string needle in the string haystack, where not more than len characters
*are searched.Characters that apprear after a '\0' character are not searched.
*Since the strnstr() function is a FREEBSD specific API, it should only be used
*when portability is not a concern.
*RETUTN VALUES:
*If needle is an empy string, hystack is returned, if needle occurs nowhere in
*haystack, NULL is returned: otherwise a pointer to the first character of the
*occurance of needle ir returned.*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *find;
	char *search;
	size_t aux;
	size_t aux2;

	search = (char *)haystack;
	find = (char *)needle;
		
	aux = 0;
	while(search[aux] != '\0'&& aux < len)
	{
		aux2 = 0;
		while (aux + aux2 < len && search[aux +aux2] == find[aux2] && find[aux2] != '\0' )
		{
			aux2++;
		}
		if (find[aux2] == '\0')
			return (search + aux);
		aux++;
	}
	return (NULL);
}
