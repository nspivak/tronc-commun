/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:32:53 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/03 17:58:46 by nspivak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int	main(int ac, char **av)
{
	int		c;
	char	dest[15];
	char	*temp = av[1];
	char	*temp2 = av[2];
	
	printf("resultat alnum : %d ", ft_isalnum(c));
	printf("resultat attendu : %d | ft_isalnum\n", isalnum(c)); // ft_isalnum
	printf("resultat alpha : %d ", ft_isalpha(c));
	printf("resultat attendu : %d | ft_isalpha\n", isalpha(c)); // ft_isalpha
	printf("resultat ascii : %d ", ft_isascii(c));
	printf("resultat attendu : %d | ft_isascii\n", isascii(c)); // ft_isascii
	printf("resultat digit : %d ", ft_isdigit(c));
	printf("resultat attendu : %d | ft_isdigit\n", isdigit(c)); // ft_isdigit
	printf("resultat print : %d ", ft_isprint(c));
	printf("resultat attendu : %d | ft_isprint\n", isprint(c)); // ft_isprint
	printf("longeur string : %lu ", ft_strlen(av[1]));
	printf("resultat attendu : %lu | ft_stren \n", strlen(av[1])); // ft_strlen
	printf("resultat strlcpy : %lu\n", ft_strlcpy(dest, av[1], 5));// ft_strlcpy
	printf("resultat strdup : %s ", ft_strdup(av[1]));
	printf("resultat attendu : %s | ft_strdup\n", strdup(av[1])); // ft_strdup
	printf("strncmp : s1 = %s , s2 = %s n = 5, difference :", av[1], av[2]);
	printf("%d | ft_strncmp\n", ft_strncmp(av[1], av[2], 5)); // ft_strncmp
	printf("resultat atoi %d : resultat attendu : %d | ft_atoi\n", ft_atoi(av[4]), atoi(av[4])); // ft_atoi
	ft_memset(av[1], av[2][0], atoi(av[3]));
	printf("resultat memset : %s ", (char *)av[1]);
	av[1] = temp;
	memset(av[1], av[2][0], atoi(av[3]));
	printf("resultat attendu : %s | ft_memset\n", (char *)av[1]); // ft_memset
	av[1] = temp;
		av[1] = temp;
	av[2] = temp2;
	ft_memcpy(av[1], av[2], atoi(av[3]));
	printf("resultat memcpy : %s ", (char *)av[1]);
	av[1] = temp;
	av[2] = temp2;
	memcpy(av[1], av[2], atoi(av[3]));
	printf("resultat attendu : %s | ft_memcpy\n", (char *)av[1]); // ft_memcpy
	av[1] = temp;
	ft_memmove(av[2], av[1], atoi(av[3]));
	printf("resultat memmove %s : ", av[1]);
	av[1] = temp;
	memmove(av[2], av[1], atoi(av[3]));
	printf("resultat attendu : %s | ft_memmove\n: ", av[1]); // ft_memmove
	ft_bzero(av[1], av[2][0]);
	printf("resultat bzero : %s ", (char *)av[1]);
	av[1] = temp;
	bzero(av[1], av[2][0]);
	printf("resultat attendu : %s | ft_bzero\n", (char *)av[1]); // ft_bzero
	av[1] = temp;
	return (ac);
}
