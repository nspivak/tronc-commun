/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:12:50 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/03 17:51:49 by nspivak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	plus;
	int	n;

	i = 0;
	minus = 0;
	plus = 0;
	n = 0;
	while ((str[i] == ' ') || (9 <= str[i] && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus++;
		if (str[i] == '+')
			plus++;	
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if((plus != 0 && minus != 0) || plus > 1 || minus > 1)
		return (0);
	if ( minus == 1)
		return (-n);
	return (n);
}	
