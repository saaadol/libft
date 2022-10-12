/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:13:25 by souledla          #+#    #+#             */
/*   Updated: 2022/10/12 10:13:30 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isaplha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	   return 1;
	return 0;	
}
