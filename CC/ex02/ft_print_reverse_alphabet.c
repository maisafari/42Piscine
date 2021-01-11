/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuntubw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:52:07 by mbuntubw          #+#    #+#             */
/*   Updated: 2021/01/10 16:42:03 by mbuntubw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void    ft_print_reverse_alphabet(void)
 {
         char last_letter;

         last_letter = 'z';
          while ( last_letter >= 'a')
          {
                 write(1,&last_letter,1);
                  last_letter--;
         }
 }
