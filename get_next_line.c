/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:54:59 by sstoliar          #+#    #+#             */
/*   Updated: 2019/01/14 18:55:01 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(const int fd, char **line)
{
	char buffer[];
	static char *tailer[];
	ssize_t read_len;

	if (tailer[fd])
		buffer = tailer[fd];
	else
	{
		buffer = malloc(BUFF_SIZE + 1);
		if ((read_len = read(fd, buffer, BUFF_SIZE)) > 0)
			buffer[read_len] = '\0';
		else
			return (read_len);
	}
}