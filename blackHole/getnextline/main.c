/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuntubw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:20:16 by mbuntubw          #+#    #+#             */
/*   Updated: 2021/03/07 18:07:45 by mbuntubw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int argc, char *argv[])
{
	int		fd;
	int		end;
	int		end_;
	int 	i;
	size_t	size;
	char	*buf;
	char	*line;

	if (argc == 2)
	{
		//printf("%s\n", argv[1]);

		if((fd = open((const char *)argv[1], O_RDONLY | O_CREAT, 0)) == -1)
		{
			printf("error when trying to open file\n");
			return (-1);
		}
		//printf("file open %d, ready to read\n", fd);

		if (!(buf = (char *)calloc(100, sizeof(char))))
		{
			printf("memory allocation error\n");
			return (-1);
		}
		if (!(line = (char *)calloc(1, sizeof(char))))
		{
			printf("memory allocation error\n");
			return (-1);
		}

		//printf("line created\n");
		end = 0;
		while ((size = read(fd, buf, 10)) > 0 && (end != 1))	
		{
			//printf("read(%d, buf,20) called, %zu bytes where read\n",fd, size);
			buf[size] = '\0';
			//printf("bytes read : %s\n", buf);
			i = 0;
			while (buf[i] != '\0' &&  buf[i] != '\n')
				i++;
			if (buf[i] == '\n')
			{
				buf[i] = '\0';
				end_ = 1;
			}
			if(!(line = ft_strjoin(line, buf)))
			{
				printf("error joining strings");
				return(-1);
			}
			end = end_;	
		}
		if (size > 0)
		{
			printf("%s", line);

			ft_memset(buf, 0, size);
			if (end == 1)
				return (0);	
		}
		if (size == 0)
			return (1);
		if (size < 0)
		{
			printf("error when reading file\n");
			return (-1);
		}

		if (close(fd) <0)
		{
			printf("error when trying to close the file");
			return (-1);
		}
	}
	else
		printf("expected argument");

		return (0);
}
