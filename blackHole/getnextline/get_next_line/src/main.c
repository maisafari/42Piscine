/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:46:39 by mariza            #+#    #+#             */
/*   Updated: 2021/03/11 16:48:47 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(int argc, char **argv)
{
	char	*line;
	int		fd;

	if (argc == 2)
	{
		if (!(fd = open(argv[1], O_RDONLY | O_CREAT)))
		{
			printf("file wasn't read");
			return (-1);
		}
		while (get_next_line(fd, &line))
			printf("%d\n %s\n\n", fd, line);
	}
	else
	{
		printf("give us a file name!!");
	}
	return (0);
}
