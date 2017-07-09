/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:45:10 by gaguirre          #+#    #+#             */
/*   Updated: 2017/07/08 20:17:11 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

int		pat_strstr(char *src, char *v_pat)
{
	while (*src)
	{
		while (*src == *v_pat)
		{
			src++;
			v_pat++;
			if (!*v_pat)
			{
				return (1);
			}
		}
		src++;
	}
	return (0);
}

void	get_valid(char valid[20][15], int i)
{
	while (++i < 20)
		ft_bzero(valid[i], sizeof(valid[i]));
	ft_strcpy(valid[0], "###...#");
	ft_strcpy(valid[1], ".#...#..##");
	ft_strcpy(valid[2], "#...###");
	ft_strcpy(valid[3], "##..#...#");
	ft_strcpy(valid[4], "###.#");
	ft_strcpy(valid[5], "##...#...#");
	ft_strcpy(valid[6], "..#.###");
	ft_strcpy(valid[7], "#...#...##");
	ft_strcpy(valid[8], "###..#");
	ft_strcpy(valid[9], ".#..##...#");
	ft_strcpy(valid[10], ".#..###");
	ft_strcpy(valid[11], "#...##..#");
	ft_strcpy(valid[12], ".##.##");
	ft_strcpy(valid[13], "#...##...#");
	ft_strcpy(valid[14], "##..##");
	ft_strcpy(valid[15], "#...#...#...#");
	ft_strcpy(valid[16], "####");
	ft_strcpy(valid[17], ".#..##..#");
	ft_strcpy(valid[18], "##...##");
}

int		valid_patern(char **src, int blocks)
{
	int valid;
	int i;
	int j;
	char v_pat[20][15];

	valid = 0;
	i = -1;
	j = -1;
	get_valid(v_pat, -1);
	while (++i < blocks)
	{
		while (++j < 19)
		{
			if (pat_strstr(src[i], v_pat[j]))
			{
				ft_bzero(src[i], ft_strlen(src[i]));
				ft_strcpy(src[i], v_pat[j]);
				valid = 1;
				break ;
			}
		}
		if (!valid)
			return (0);
	}
	return (1);
}
