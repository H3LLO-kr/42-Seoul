/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:27:09 by chanhapa          #+#    #+#             */
/*   Updated: 2022/04/19 15:34:15 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buff[BUFFER_SIZE];
	char	*line;
	int		read_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	while ((read_line = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		
	}
}
