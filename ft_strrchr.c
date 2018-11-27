/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:17:26 by fgaujard          #+#    #+#             */
/*   Updated: 2018/11/27 17:17:59 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;

	i = 0;
	if ((char)c == '\0')
		return ((char *)(s + ft_strlen(s) + 1));
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			j = i++;
		else
			i++;
	}
	if (j != 0)
		return ((char *)(s + j));
	else
		return (NULL);
}
