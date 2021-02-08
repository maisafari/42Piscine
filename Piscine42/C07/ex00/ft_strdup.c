/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 22:56:25 by mariza            #+#    #+#             */
/*   Updated: 2021/02/02 20:22:48 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		size;
	int		count;

	size = 0;
	{
		pj
		
	}
	count = 0;
	while (src[size])
	{
		size++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
	{
		return (NULL);
	}
	while (src[count])
	{
		str[count] = src[count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
