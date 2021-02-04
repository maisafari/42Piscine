/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:11:04 by mariza            #+#    #+#             */
/*   Updated: 2021/02/04 14:44:12 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_put_err(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr)
	{
		write(2, charptr++, 1);
	}
}

void	ft_print_stdin(void)
{
	char buf;

	while (read(STDIN_FILENO, &buf, 1))
		write(1, &buf, 1);
}

void	inval_param(char *arg)
{
	ft_put_err("ft_cat: ");
	ft_put_err(arg);
	ft_put_err(": No such file or directory\n");
}
