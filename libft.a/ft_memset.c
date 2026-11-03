/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:14:07 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/03 14:07:34 by nspivak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
