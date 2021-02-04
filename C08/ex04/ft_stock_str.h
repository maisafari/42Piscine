/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 22:12:00 by mariza            #+#    #+#             */
/*   Updated: 2021/02/03 23:17:10 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H




typedef	struct		 s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}					t_stock_str;

int					ft_string_size(char *str);
char				*ft_strcp(char *str);
void				ft_print_str(char *str);
void 				ft_print_num(int n);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void 				ft_show_tab(struct s_stock_str *par);

#endif