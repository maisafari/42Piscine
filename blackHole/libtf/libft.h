/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuntubw <mbuntubw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 16:56:49 by mariza            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/02/16 20:39:55 by mariza           ###   ########.fr       */
=======
/*   Updated: 2021/02/15 21:03:39 by mbuntubw         ###   ########.fr       */
>>>>>>> 8ee8edc6e8a43475ad63d470196cc4a062673e62
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strrchr(const char *s, int c);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
<<<<<<< HEAD
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strstr(const char *haystack, const char *needle, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstlen);
=======
size_t	ft_strlen(char *srt);
size_t	ft_strlcat(char *restrict dst, const char * restrict  src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle, size_t len);
>>>>>>> 8ee8edc6e8a43475ad63d470196cc4a062673e62

#endif
