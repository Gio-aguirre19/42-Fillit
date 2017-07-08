/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_caller.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:54:07 by gaguirre          #+#    #+#             */
/*   Updated: 2017/07/08 14:58:30 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

int		check_tetriminos(char *file)
{
	if (!check_chars(file))
		return (0);
	if (!check_width(file))
		retur (0);
	if (!check_length(file))
		return (0);
	return (1);
}

char	**setup_puzzle(char *file)
{
	int n;
	char **puzzle;

	n = count_pieces(file);
	if (n > 26)
	{
		ft_putstr("error\n");
		return (0);
	}
	puzzle = (char **)malloc(sizeof(char) * n + 1);
	if (!puzzle)
		return (0);
	if (!get_pieces(file, puzzle))
		return (0);
	return (puzzle);
}
