/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:31:21 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/09 16:49:12 by nspivak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;
	size_t	l_len;

	l_len = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	if (l_len > len)
		return (0);
	i2 = 0;
	while (i2 + l_len <= len && big[i2])
	{
		i = 0;
		while (i < l_len && big[i2 + i] == little[i])
			i++;
		if (i == l_len)
			return ((char *)&big[i2]);
		i2++;
	}
	return (0);
}
