/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:40:48 by souledla          #+#    #+#             */
/*   Updated: 2022/10/12 10:40:55 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d;
    const char *s;

    s = src;
    d = dest;
    if (d || s)
    {
        if (d < s)
            while (n--)
            *d++ = *s++;
        else
        {
            const char *lasts;
            char *lastd;

            lasts = s + (n - 1);  
            lastd = d + (n - 1);
            while (n--)
                *lastd-- = *lasts--;
        }
        return (dest);
    }
    return (NULL);
    
    
}
