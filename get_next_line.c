/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:46:14 by fgaujard          #+#    #+#             */
/*   Updated: 2019/01/09 16:08:07 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		line_info(int const fd, char **stack)
{
	char	*buff;
	int		ret;
	char	*temp;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
	{
		buff[ret] = '\0';
		temp = ft_strjoin(*stack, buff);
		free(*stack);
		*stack = temp;
	}
	free(buff);
	return (ret);
}

int				get_next_line(int const fd, char **line)
{
	static char	*stack = NULL;
	char		*endline;
	int			ret;

	if ((!stack && (stack = (char *)malloc(sizeof(*stack))) == NULL) ||
			!line || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	endline = ft_strchr(stack, '\n');
	while (endline == NULL)
	{
		ret = line_info(fd, &stack);
		if (ret == 0)
		{
			if (ft_strlen(stack) == 0)
				return (0);
			stack = ft_strjoin(stack, "\n");
		}
		if (ret < 0)
			return (-1);
		else
			endline = ft_strchr(stack, '\n');
	}
	*line = ft_strsub(stack, 0, (ft_strlen(stack) - ft_strlen(endline)));
	stack = ft_strdup(endline + 1);
	return (1);
}