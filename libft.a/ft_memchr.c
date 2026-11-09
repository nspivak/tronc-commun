/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:51:01 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/09 16:33:33 by nspivak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (const unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
/*int main(int ac, char **av)
{
	char *temp = av[1];
	void *resultt = ft_memchr(av[1], av[2][0], atoi(av[3]));
	printf("resultatmemchr : %s, ", (char *)resultt);
av[1] = temp;
	void *result = memchr(av[1], av[2][0], atoi(av[3]));
	printf("resultat attendu : %s | ft_memchr\n", (char *)result);
}*/