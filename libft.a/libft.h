/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:25:44 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/03 17:41:02 by nspivak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <ctype.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>

void			*ft_memset(void *s, int c, size_t n);
int				ft_isalpha(int c);
int				ft_isprint(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isalnum(int c);
size_t	        ft_strlen(const char *s);
size_t          ft_strlcpy(char *dst, const char *src, size_t size);
void			ft_bzero(void *s, size_t n);
char			*ft_strdup(char *src);
int	            ft_strncmp(char *s1, char *s2, unsigned int n);
int	            ft_atoi(const char *str);
void            *ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);


#endif