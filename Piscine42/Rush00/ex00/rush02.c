/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuntubw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 21:34:29 by mbuntubw          #+#    #+#             */
/*   Updated: 2021/01/10 21:34:32 by mbuntubw         ###   ########.fr       */
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
		print_horizon(x, 'A', 'B', 'A');
		print_vertical(x, y, 'B');
		if (y >= 2)
			print_horizon(x, 'C', 'B', 'C');
	}
}
