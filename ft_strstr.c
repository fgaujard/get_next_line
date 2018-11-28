/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:02:24 by fgaujard          #+#    #+#             */
/*   Updated: 2018/11/28 17:23:29 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int len_str;
	int len_to_find;
	int i;
	int j;

	i = 0;
	len_str = ft_strlen(str);
	len_to_find = ft_strlen(to_find);
	while (i < (len_str - len_to_find + 1))
	{
		j = 0;
		while (j < len_to_find)
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (j == len_to_find)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
