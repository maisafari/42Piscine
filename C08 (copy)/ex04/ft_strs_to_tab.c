/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:54:35 by mariza            #+#    #+#             */
/*   Updated: 2021/02/03 23:34:34 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_string_size(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char				*ft_strcp(char *str)
{
	char	*str_cp;
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		str_cp[count] = str[count];
		count++;
	}
	str_cp[count] = '\0';
	return (str_cp);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*n_av;
	int			count;

	count = 0;
	if (!(n_av = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (count < ac)
	{
		n_av[count].size = ft_string_size(av[count]);
		n_av[count].str = av[count];
		n_av[count].copy = ft_strcp(av[count]);
		count++;
	}
	n_av[count].size = 0;
	n_av[count].str = 0;
	n_av[count].copy = 0;
	return (n_av);
}
