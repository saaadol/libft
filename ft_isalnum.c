/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:26:07 by souledla          #+#    #+#             */
/*   Updated: 2022/10/12 10:26:22 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_isalnum(int c)
{
    if ((c >= 48 && c <= 57) || 
    (c >= 65 && c <= 90) || 
    (c >= 97 && c <= 122))
        return 1;
    return 0;

}
