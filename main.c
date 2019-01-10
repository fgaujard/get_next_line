/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:48:28 by fgaujard          #+#    #+#             */
/*   Updated: 2019/01/10 13:22:00 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;

	i = 1;
	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (-1);
	while (get_next_line(fd, &line))
	{
		ft_putnbr(i++);
		ft_putendl(line);
		free(line);
	}
	if (argc == 2)
		close(fd);
	return (0);
}
