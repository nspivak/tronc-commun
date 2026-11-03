/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 15:03:57 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/03 13:34:52 by nspivak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != 0 || s2[i] != 0))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
	char s1[] = "gfge";
    	char s2[] = "gfge";
	unsigned int n = 550;
	printf("%d\n", ft_strncmp(s1, s2, n));
	return(0);
}*/
