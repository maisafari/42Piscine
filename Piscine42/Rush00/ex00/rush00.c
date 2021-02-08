/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoveral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 12:32:06 by fsoveral          #+#    #+#             */
/*   Updated: 2021/01/10 17:28:56 by mbuntubw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_horizon(int x, char left, char middle, char right)
{
	if (x-- >= 1)
	{
		ft_putchar(left);
		while (x-- >= 2)
			ft_putchar(middle);
		if (x == 0)
			ft_putchar(right);
		ft_putchar('\n');
	}
}

void	print_vertical(int x2, int y1, char wall)
{
	int i;

	while (y1-- > 2)
	{
		ft_putchar(wall);
		i = 2;
		if (x2 >= 2)
		{
			while (x2 > i++)
			{
				ft_putchar(' ');
			}
			ft_putchar(wall);
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
	{
		print_horizon(x, 'o', '-', 'o');
		print_vertical(x, y, '|');
		if (y >= 2)
			print_horizon(x, 'o', '-', 'o');
	}
}
