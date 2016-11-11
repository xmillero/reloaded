/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmillero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:17:11 by xmillero          #+#    #+#             */
/*   Updated: 2016/11/11 16:58:11 by xmillero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int fd)
{
	char buf[2];

	while (read(fd, &buf, 1))
		write(1, &buf, 1);
}

int		main(int argc, char **argv)
{
	int fd;

	fd = 0;
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n,", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		ft_display_file(fd);
		close(fd);
	}
	return (0);
}
