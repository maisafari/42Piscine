/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 23:49:26 by mariza            #+#    #+#             */
/*   Updated: 2021/02/02 18:41:38 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char*   ft_strdup(char *src);

int     main(void)
{    
    //printf("%s", strdup("mariri"));
    printf("%s", ft_strdup("mariette"));
    return (0);
}
