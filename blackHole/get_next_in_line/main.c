/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:14:58 by mariza            #+#    #+#             */
/*   Updated: 2021/03/02 21:35:38 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp;

	if(argc != 2)
		{
			printf("poucos argumentos");
			exit(0);
		}
	fp = fopen(argv[1],"r");
	if( fp == NULL)
		printf("impossivel abrir ficheiro %s\n", argv[1]);
	else
	{
		printf("ficheiro aberto!\n");
		fclose(fp);
	}
}