/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:02:24 by fgaujard          #+#    #+#             */
/*   Updated: 2018/11/28 17:36:57 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t len_str;
	size_t len_to_find;
	size_t i;
	size_t j;

	i = 0;
	len_str = (size_t)ft_strlen(str);
	len_to_find = (size_t)ft_strlen(to_find);
	while ((i < len) && (len < (len_str - len_to_find + 1)))
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
