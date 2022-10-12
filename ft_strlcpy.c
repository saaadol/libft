/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:41:20 by souledla          #+#    #+#             */
/*   Updated: 2022/10/12 10:41:29 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t len_src;
    
    len_src = ft_strlen(src) - 1;
    i = 0;
    
    if (size == 0)
        return len_src;
    size--;
    while(dst[i] && i <= size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return len_src;
}
