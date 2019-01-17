/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 15:37:11 by fgaujard          #+#    #+#             */
/*   Updated: 2019/01/17 17:02:55 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line"

int		give_line(int const fd, char *stack)
{
	char	*buff;
	int		oct;

	if (!(buff = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	oct = read(fd, buff, BUFF_SIZE);
	if (oct > 0)
	{
		buff[oct] = '\0';
		stack = ft_strappend(stack, buff);
	}
	free(buff);
	return (oct)
}

int		get_next_line(int const fd, char **line)
{
	static char *stack;

	while (give_line(fd, stack) > 0)
	{

