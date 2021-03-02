/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:12:20 by mariza            #+#    #+#             */
/*   Updated: 2021/02/17 18:30:17 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**STRLEN
**Calculate the length of a string
**SYNOPSIS
**#include <string.h>
**size_t		strlen(const char *s);
**DESCRIPTION
**The strlen() fnction calculates the length of the string pointed to by s,
**excluding the terminating null byte ('\0').
**RETURN VALUE
**The strlen() function returns the number of bytes in the string pointed
**by s.
*/

size_t		ft_strlen(const char *s)
{
	size_t		len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
