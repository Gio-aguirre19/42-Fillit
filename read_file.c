/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:26:02 by gaguirre          #+#    #+#             */
/*   Updated: 2017/07/04 12:58:58 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		read_file(int const fd, char **file)
{
	int rb;

	rb = read(fd, file, BUFF_SIZE);
	file[rb] = '\0';
}
