/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuntubw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:10:52 by mbuntubw          #+#    #+#             */
/*   Updated: 2021/03/07 17:34:24 by mbuntubw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t		ft_strlen(const char *s)
{
	size_t		len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
void	*ft_calloc(size_t nmemb, size_t size)
{
	char *ptr;

	if (!(ptr = malloc(nmemb * size)))
		return (NULL);
	ptr = ft_memset(ptr, 0, nmemb * size);
	return ((void *)ptr);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(str = (char *)ft_calloc((ft_strlen(s2) +
		ft_strlen(s1) + 1), sizeof(char))))
		return (NULL);
	i = 0;
	while (*s1)
	{
		str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	str[i] = '\0';
	return (str);
}

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
