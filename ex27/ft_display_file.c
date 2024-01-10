/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aggrigor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:42:45 by aggrigor          #+#    #+#             */
/*   Updated: 2024/01/09 18:17:00 by aggrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

#define NOT_OPEN -1
#define CANNOT_READ -1
#define BUF_SIZE 1024

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putstrn(char *str, size_t n)
{
	write(1, str++, n);
}

size_t	display_file(int fd)
{
	char	buf[BUF_SIZE];
	size_t	read_res;

	read_res = BUF_SIZE;
	while (read_res > 0)
	{
		read_res = read(fd, buf, BUF_SIZE);
		if (read_res > 0)
			ft_putstrn(buf, read_res);
	}
	return (read_res);
}

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == NOT_OPEN)
		{
			ft_putstr("Cannot read file.\n");
			return (0);
		}
		if (display_file(fd) == (size_t)CANNOT_READ)
			ft_putstr("Cannot read file.\n");
		close(fd);
	}
	return (0);
}
