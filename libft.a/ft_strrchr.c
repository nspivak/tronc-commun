/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:23:46 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/09 16:52:17 by nspivak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*e;

	e = NULL;
	i = ft_strlen(s);
	while (s[i] != (char)c && i > 0)
		i--;
	while (i > 0)
	{
		s++;
		i--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)e);
}
