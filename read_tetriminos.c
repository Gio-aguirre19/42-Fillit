/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_tetriminos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 23:08:48 by enunes            #+#    #+#             */
/*   Updated: 2017/07/06 16:21:59 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <fillit.h>

int		read_tetriminos(int const fd, char *file)
{
	int		rb;
	char	tmp[BUFF_SIZE + 1];

	rb = read(fd, tmp, BUFF_SIZE);
	tmp[rb] = '\0';
	ft_strcpy(file, tmp);
	return (0);
}
