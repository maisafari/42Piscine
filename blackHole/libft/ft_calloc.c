/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 23:09:06 by mariza            #+#    #+#             */
/*   Updated: 2021/03/01 18:40:57 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *ptr;

	if (!(ptr = malloc(nmemb * size)))
		return (NULL);
	ptr = ft_memset(ptr, 0, nmemb * size);
	return ((void *)ptr);
}
