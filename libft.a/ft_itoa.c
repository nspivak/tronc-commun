/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:40:07 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/10 00:21:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int			i;
	long int	nb;

	nb = n;
	i = 1;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	long int	nb;
	char		*tmp;

	nb = n;
	i = ft_count(nb);
	tmp = malloc(sizeof(char) * (i + 1));
	if (!tmp)
		return (NULL);
	tmp[i] = 0;
	if (nb < 0)
		tmp[0] = '-';
	if (nb < 0)
		nb = -nb;
	if (nb == 0)
		tmp[0] = '0';
	i--;
	while (nb > 0)
	{
		tmp[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	return (tmp);
}
