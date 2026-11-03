/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:29:23 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/03 13:38:03 by nspivak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"



char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*cpy;

	cpy = malloc(sizeof(char) * ft_strlen(src) + 1);
	ft_strcpy(cpy, src);
	return (cpy);
}
/*int main(void)
{
	char *src = "jaajaajaa";
	printf("%s\n", ft_strdup(src));
	printf("%s", strdup(src));
	return (0);
}*/
