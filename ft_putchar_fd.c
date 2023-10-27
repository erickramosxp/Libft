/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:39:11 by erramos           #+#    #+#             */
/*   Updated: 2023/10/27 18:01:51 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
/*
int	main(void)
{
	char*	file = "out.txt";
	int	fd;
	char	c;

	c = 'A';
	fd = open(file, O_RDWR | O_CREAT);
	if (fd == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	ft_putchar_fd(c, fd);

	close(fd);
}*/
