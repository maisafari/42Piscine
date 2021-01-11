/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuntubw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:08:06 by mbuntubw          #+#    #+#             */
/*   Updated: 2021/01/10 20:32:27 by mbuntubw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_comb(void)
{
	int numb;
	int num_1;
	int num_2;
	int num_3;
	int count;
	char c_num; 
	char p;

	p = ' ';
	numb = 0;
	num_1 = 0;
	num_2 = num_1+1;
	num_3 = num_2+2;

	c_num = numb + '0'; 

	if(num_1 <= 9)
	{
		while(num_1 <= 7)
		{
			
			count =0;
			while(count <3)
			{
				c_num = num_1 + '0'; 
				write(1,&c_num,1);
				count++;
				while(num_2 > 9)
				{
					c_num = num_2 + '0'; 
					write(1, &c_num, 1);
					count++;
					while(num_3 > 9)
					{
						c_num = num_3 + '0'; 
						write(1, &c_num, 1);
					}
				}
				count++;
			}
			write(1, &p, 1);

			}
		num_1++;
		num_2 = num_1+1;
		num_3 = num_2+2;

					
		}

	}
			

