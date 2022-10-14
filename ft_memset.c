/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:27:24 by souledla          #+#    #+#             */
/*   Updated: 2022/10/12 10:27:30 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	char *x;
	
	x = (char *) b; 
	i = 0;
	while (i < len)
	{
	    x[i] = c;
	    i++;
	}
	return (x);
}
