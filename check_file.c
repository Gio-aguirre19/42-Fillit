/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:47:37 by gaguirre          #+#    #+#             */
/*   Updated: 2017/07/04 14:39:55 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_file(char **file)
{
	int ltr;
	int j;
	int row_c;

	ltr = 0;
	j = 0;
	row_c = 0;
	while (file[0][j])
	{
		if (file[0][j] == '\n' && file[0][j + 1] == '\n')
		{
			count++;
			ltr = 0;
		}
		if ((file[0][j] != '#' || file[0][j] != '.') 
				|| (file[0][j] != '\n') || (count > 26)
				|| (ltr > 4))
		{
			ft_putstr("error\n");
			return (0);
		}
		j++;
		ltr++;
	}
}
