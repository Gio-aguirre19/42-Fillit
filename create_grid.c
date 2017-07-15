/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 20:18:26 by gaguirre          #+#    #+#             */
/*   Updated: 2017/07/15 16:22:48 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

char		**create_grid(int size)
{
	int		i;
	int		j;
	char	**grid;
	int		size_c;

	size_c = size + 3;
	grid = (char **)malloc(sizeof(grid *) * (size_c + 1));
	if (!grid)
		return (0);
	i = -1;
	while (++i < size)
	{
		grid[i] = ft_strnew(size_c);
		if (!grid)
			return (0);
		j = -1;
		while (++j < size)
			grid[i][j] = '.';
	}
	while (i <= size_c)
	{
		map[i] = ft_newstr(size_c);
		i++;
	}
	return (grid);
}
