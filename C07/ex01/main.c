/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 20:23:45 by mariza            #+#    #+#             */
/*   Updated: 2021/02/02 20:47:54 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int     main(void)
{    
	int *test;
	int i;
	i = 0;
	test = ft_range(0, 1001);
	while(i< 1001+0+1)
    {
		printf("%d\n", test[i]);
		i++;
	}
    return (0);
}