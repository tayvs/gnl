/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:56:37 by sstoliar          #+#    #+#             */
/*   Updated: 2019/01/14 18:56:42 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# inlude "libft/libft.h"
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

int	get_next_line(const int fd, char **line);

#endif
