/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_tetriminos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 23:08:48 by enunes            #+#    #+#             */
/*   Updated: 2017/07/04 19:59:58 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define BUFF_SIZE 546
#include <stdio.h>
#include <unistd.h>

int		read_tetriminos(int const fd, char **file)
{
	int		rb;
	char	tmp[BUFF_SIZE + 1];

	rb = read(fd, tmp, BUFF_SIZE);
	tmp[rb] = '\0';
	printf("%s", tmp);
	*file = tmp;
	return (0);
}
