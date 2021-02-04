/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:58:30 by mariza            #+#    #+#             */
/*   Updated: 2021/02/02 20:41:52 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int size;

	size = (max - min) + 1;
	if ((min >= max) || (!(arr = (int*)malloc((size) * sizeof(int)))))
		return (NULL);
	size = 0;
	while (min <= max)
	{
		arr[size] = min;
		size++;
		min++;
	}
	return (arr);
}
