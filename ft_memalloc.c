/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:22:59 by fgaujard          #+#    #+#             */
/*   Updated: 2018/11/19 18:32:41 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*dest;
	size_t		i;

	i = 0;
	if (!(dest = (char *)malloc(sizeof(char) * size)))
		return (0);
	while (i <= size)
		dest[i++] = 0;
	return ((void *)dest);
}
