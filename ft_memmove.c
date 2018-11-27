/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:29:16 by fgaujard          #+#    #+#             */
/*   Updated: 2018/11/21 14:30:20 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char tmp;
	unsigned char *dst;

	i = 0;
	dst = (unsigned char *)dest;
	while (i < n)
	{
		tmp = *(unsigned char *)(src + i);
		dst[i] = tmp;
		i++;
	}
	return (dest);
}
