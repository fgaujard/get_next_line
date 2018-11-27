/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:09:16 by fgaujard          #+#    #+#             */
/*   Updated: 2018/11/21 14:28:56 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>


void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	int		*tab;

	i = 0;
	tab = (int *)b;
	while (i < len)
		tab[i++] = c;
	return (b);
}
