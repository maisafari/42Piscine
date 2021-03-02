/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 20:55:05 by mariza            #+#    #+#             */
/*   Updated: 2021/03/02 20:31:14 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrsize(int n)
{
	int	size;

	size = 0;
	if (n <= 9)
		return (1);
	while (n > 0)
	{
		n = (n / 10);
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	int		neg;
	char	*num;

	neg = 0;
	size = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = (n < 0) ? 1 : 0;
	n = (neg == 1) ? n * -1 : n;
	size += ft_nbrsize(n);
	if (!(num = (char *)malloc(sizeof(char) * (size + neg + 1))))
		return (NULL);
	num[size + neg] = '\0';
	while (size > 0)
	{
		num[--size + neg] = n % 10 + 48;
		n /= 10;
	}
	num[0] = neg == 1 ? '-' : num[0];
	return (num);
}
