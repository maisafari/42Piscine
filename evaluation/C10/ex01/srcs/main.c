/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:19:29 by mariza            #+#    #+#             */
/*   Updated: 2021/02/04 14:45:01 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf;

	i = 1;
	if (argc == 1)
		ft_print_stdin();
	else
		while (i < argc)
		{
			if ((fd = open(argv[i], O_RDONLY)) < 0)
				inval_param(argv[i]);
			else
			{
				while (read(fd, &buf, 1))
					write(1, &buf, 1);
			}
			i++;
			close(fd);
		}
	return (0);
}
