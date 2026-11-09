/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:10:32 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/09 16:36:07 by nspivak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*f;

	d = (unsigned char *)s1;
	f = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (d[i] != f[i])
			return (d[i] - f[i]);
		i++;
	}
	return (0);
}
