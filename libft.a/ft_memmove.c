/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspivak <nspivak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:08:12 by nspivak           #+#    #+#             */
/*   Updated: 2026/11/03 17:47:58 by nspivak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *d;
    unsigned char   *s;

    d = (unsigned char*)dest;
    s = (unsigned char*)src;
    if(d < s)
    {
        while(n--)
        *d++ = *s++;
    }
    else
    {
        d += n;
        s += n;
        while (n--)
        *d-- = *s--;
    }
    return (dest);
}