/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 12:05:37 by fgaujard          #+#    #+#             */
/*   Updated: 2018/11/19 17:08:31 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	unsigned int	i;
	char			*dest;

	i = 0;
	size = ft_strlen(s);
	if (!(dest = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (s[i] != '\0')
	{
		dest = (*f)(i, s[i]);
		i++;
	}
	return (dest);
}