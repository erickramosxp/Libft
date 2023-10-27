/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:46:43 by erramos           #+#    #+#             */
/*   Updated: 2023/10/27 19:43:00 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	write(fd, s, sizeof(s));
}

int     main(void)
{
        char*   file = "out.txt";
        int     fd;
        char    c[] = "makefile";
	int	a;
	
	a = 123;
        fd = open(file, O_RDWR | O_CREAT);
        if (fd == -1)
        {
                perror("open");
                exit(EXIT_FAILURE);
        }
        ft_putnbr_fd(a, fd);

        close(fd);
}
