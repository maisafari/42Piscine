/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuntubw <mbuntubw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:52:02 by mbuntubw          #+#    #+#             */
/*   Updated: 2021/02/17 13:35:21 by mbuntubw         ###   ########.fr       */
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
*The strnstr() function locates the first ocurrance if the NULL terminated
*string needle in the string haystack, where not more than len characters
*are searched.Characters that apprear after a '\0' character are not searched.
*Since the strnstr() function is a FREEBSD specific API, it should only be used
*when portability is not a concern.
*RETUTN VALUES:
*If needle is an empy string, hystack is returned, if needle occurs nowhere in
*haystack, NULL is returned: otherwise a pointer to the firdt character of the
*occurance of needle ir returned.*/

char	*ft_strstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while( i++ < len && haystack[i]!= '\0')
	{
		j = 0;
		while( (i + j) < len && haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if(needle[j] == '\0')
			return ((char *)haystack + i);
	}
	return (NULL);

}