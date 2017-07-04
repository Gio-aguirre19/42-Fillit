/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 11:54:33 by gaguirre          #+#    #+#             */
/*   Updated: 2017/07/04 15:56:07 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUFF_SIZE 168 

int		fillit(int argc, char **argv)
{
	int	fd;
	int ret;
	char *file[BUFF_SIZE];

	if (argc != 2)
	{
		ft_putstr("error\n");
		return (0);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		ret = read_file(fd, &file);
		if (ret == -1)
		{
			ft_putstr("error\n");
			return (0);
		}
		else
			check_file(file);
	}
}
