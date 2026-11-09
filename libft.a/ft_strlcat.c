/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:42:21 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/09 16:46:19 by nspivak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i2;
	size_t	s;
	size_t	srclen;

	srclen = ft_strlen(src);
	i = 0;
	i2 = 0;
	if (size == 0)
		return (srclen);
	while (dst[i] != 0 && i < size)
		i++;
	if (i == size)
		return (size + srclen);
	s = ft_strlen(dst) + srclen;
	while (dst[i] != '\0' && i < size - 1)
		i++;
	while (src[i2] != 0 && i + i2 < size - 1)
	{
		dst[i + i2] = src[i2];
		i2++;
	}
	dst[i + i2] = 0;
	return (s);
}
/*#include <string.h>
#include <bsd/string.h>
int main(void)
{
	char dst[60] = "abc";
	char *src = "1234";
	printf("%lu, %s\n", ft_strlcat(dst, src, 5), dst);
	char dest[60] = "abc";
	char *source = "1234";
	printf("%lu, %s\n",strlcat(dest, source, 5), dest);
	return (0);
}*/