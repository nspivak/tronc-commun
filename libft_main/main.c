/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:32:53 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/06 14:02:15 by nspivak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int ac, char **av)
{
    (void)ac;
    int c = av[1][0];
    char buffer1[64];
    char buffer2[64];
    char dest[15];

    strcpy(buffer1, av[1]);
    strcpy(buffer2, av[2]);

    // ft_isalnum
    printf("resultat alnum : %d, resultat attendu : %d | ft_isalnum\n", ft_isalnum(c), isalnum(c));
    // ft_isalpha
    printf("resultat alpha : %d, resultat attendu : %d | ft_isalpha\n", ft_isalpha(c), isalpha(c));
    // ft_isascii
    printf("resultat ascii : %d, resultat attendu : %d | ft_isascii\n", ft_isascii(c), isascii(c));
    // ft_isdigit
    printf("resultat digit : %d, resultat attendu : %d | ft_isdigit\n", ft_isdigit(c), isdigit(c));
    // ft_isprint
    printf("resultat print : %d, resultat attendu : %d | ft_isprint\n", ft_isprint(c), isprint(c));
    // ft_strlen
    printf("resultat strlen : %lu, resultat attendu : %lu | ft_strlen\n", ft_strlen(av[1]), strlen(av[1]));
    // ft_strlcpy
    printf("resultat strlcpy : %lu\n", ft_strlcpy(dest, av[1], 5));
    // ft_strdup
    printf("resultat strdup : %s, resultat attendu : %s | ft_strdup\n", ft_strdup(av[1]), strdup(av[1]));
    // ft_strncmp
    printf("strncmp : s1 = %s, s2 = %s, n = 5, difference : %d | ft_strncmp\n", av[1], av[2], ft_strncmp(av[1], av[2], 5));
    // ft_atoi
    printf("resultat atoi : %d, resultat attendu : %d | ft_atoi\n", ft_atoi(av[4]), atoi(av[4]));

    // ft_memset
    strcpy(av[1], buffer1);
    ft_memset(av[1], av[2][0], atoi(av[3]));
    printf("resultat memset : %s, ", av[1]);
    strcpy(av[1], buffer1);
    memset(av[1], av[2][0], atoi(av[3]));
    printf("resultat attendu : %s | ft_memset\n", av[1]);

    // ft_memcpy
	char dst1[64], dst2[64];
	strcpy(dst1, buffer1);
	strcpy(dst2, buffer2);
	ft_memcpy(dst1, dst2, atoi(av[3]));
	printf("resultat memcpy : %s, ", dst1);
	strcpy(dst1, buffer1);
	strcpy(dst2, buffer2);
	memcpy(dst1, dst2, atoi(av[3]));
	printf("resultat attendu : %s | ft_memcpy\n", dst1);

    // ft_memmove
    char dst3[64], dst4[64];
	strcpy(dst3, buffer1);
	strcpy(dst4, buffer2);
	ft_memmove(dst4, dst3, atoi(av[3]));
	printf("resultat memmove : %s, ", dst4);
	strcpy(dst3, buffer1);
	strcpy(dst4, buffer2);
	memmove(dst4, dst3, atoi(av[3]));
	printf("resultat attendu : %s | ft_memmove\n", dst4);

    // ft_toupper
    printf("resultat toupper : %c, resultat attendu : %c | ft_toupper\n", ft_toupper('c'), toupper('c'));
    // ft_tolower
    printf("resultat tolower : %c, resultat attendu : %c | ft_tolower\n", ft_tolower('C'), tolower('C'));

    // ft_strchr
    strcpy(av[1], buffer1);
    strcpy(av[2], buffer2);
    printf("resultat strchr : %s, resultat attendu : %s | ft_strchr\n", ft_strchr(av[1], av[2][0]), strchr(av[1], av[2][0]));
    // ft_strrchr
    printf("resultat strrchr : %s, resultat attendu : %s | ft_strrchr\n", ft_strrchr(av[1], av[2][0]), strrchr(av[1], av[2][0]));

    // ft_memchr
    strcpy(av[1], buffer1);
    strcpy(av[2], buffer2);
    void *resultt = ft_memchr(av[1], av[2][0], atoi(av[3]));
    printf("resultat memchr : %s, ", resultt ? (char *)resultt : "(null)");
    void *result = memchr(av[1], av[2][0], atoi(av[3]));
    printf("resultat attendu : %s | ft_memchr\n", result ? (char *)result : "(null)");

    // ft_bzero
    strcpy(av[1], buffer1);
    ft_bzero(av[1], atoi(av[3]));
    printf("resultat bzero : %s, ", av[1]);
    strcpy(av[1], buffer1);
    bzero(av[1], atoi(av[3]));
    printf("resultat attendu : %s | ft_bzero\n", av[1]);

    // ft_strlcat
    char dst[60] = "abc";
    char dust[60] = "abc";
    printf("resultat strlcat : %lu, %s, resultat attendu : %lu, %s | ft_strlcat\n",
        ft_strlcat(dst, "11111", 100), dst,
        strlcat(dust, "11111", 100), dust);
	
	// ft_memcmp
	char m1[64], m2[64];
	strcpy(m1, buffer1);
	strcpy(m2, buffer2);
	printf("resultat memcmp : %d, ", ft_memcmp(m1, m2, atoi(av[3])));
	strcpy(m1, buffer1);
	strcpy(m2, buffer2);
	printf("resultat attendu : %d | ft_memcmp\n", memcmp(m1, m2, atoi(av[3])));
	
	// ft_strnstr
	char h1[64], h2[64];
	strcpy(h1, buffer1);
	strcpy(h2, buffer2);
	char *r1 = ft_strnstr(h1, h2, atoi(av[3]));
	printf("resultat strnstr : %s, ", r1 ? r1 : "(null)");
	strcpy(h1, buffer1);
	strcpy(h2, buffer2);
	char *r2 = strnstr(h1, h2, atoi(av[3]));
	printf("resultat attendu : %s | ft_strnstr\n", r2 ? r2 : "(null)");   

	// ft_calloc
void *p1 = ft_calloc(atoi(av[3]), sizeof(char));
void *p2 = calloc(atoi(av[3]), sizeof(char));
printf("resultat calloc : %s, attendu : %s | ft_calloc\n",
    p1 ? "OK (zeroed)" : "NULL",
    p2 ? "OK (zeroed)" : "NULL");

// vérifier que la mémoire est bien zéroée
int zeroed1 = 1;
int zeroed2 = 1;
for (int i = 0; i < atoi(av[3]); i++)
{
    if (((char *)p1)[i] != 0) zeroed1 = 0;
    if (((char *)p2)[i] != 0) zeroed2 = 0;
}
printf("mémoire zéroée : ft=%d, libc=%d | ft_calloc\n", zeroed1, zeroed2);

// ft_strsub
const char *str = "bonjour";
unsigned int start = 3;
size_t len = 4;
printf("result substr : %s | ft_substr\n", ft_substr(str, start, len ));

// ft_strjoin
char j1[64], j2[64];
	strcpy(j1, buffer1);
	strcpy(j2, buffer2);
    printf("resultat strjoin : %s\n", ft_strjoin(j1, j2));

// ft_strtrim
char t1[64], t2[64];
	strcpy(t1, buffer1);
	strcpy(t2, buffer2);
    printf("resultat strtrim :%s\n", ft_strtrim(t1, t2));

// ft_split
    const char *strrr = " hello world ";
	char charset = ' ';
	char **array = ft_split(strrr, charset);
	int	i;

	i = 0;
	while (array[i] != NULL)
	{	
		printf("%s\n", array[i]);
		i++;
	}
free(p1);
free(p2);   
    return 0;
}   