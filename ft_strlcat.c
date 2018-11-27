/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:58:20 by fgaujard          #+#    #+#             */
/*   Updated: 2018/11/22 18:12:43 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcat(char *dest, const char *src, size_t l)
{
	size_t size_dest;
	size_t size_src;
	size_t i;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size_dest >= (l - 1))
		return (size_src + size);
	while ((size_dest + i) < (l - 1))
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + size_src);
}
