/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:35:36 by souledla          #+#    #+#             */
/*   Updated: 2022/10/08 17:46:02 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strjoin(char const *s1,char const *s2)
{
	char *temp;
	int len;
	int i;
	
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	temp = (char *)malloc(sizeof(char) * (len + 1));
	if (!temp)
		return 0;
	while (*s1)
	   temp[i++] = *s1++;
	while (*s2)
		temp[i++] = *s2++;
	temp[i] = '\0';
	return temp;
}