/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:46:43 by erramos           #+#    #+#             */
/*   Updated: 2023/10/28 17:07:05 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
*/
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{	
		ft_putchar_fd('-', fd);
		n = n *(-1);
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*
int     main(void)
{
        char*   file = "out.txt";
        int     fd;
        char    c[] = "makefile";
	int	a;
	
	a = 12345687;
        fd = open(file, O_RDWR | O_CREAT);
        if (fd == -1)
        {
                perror("open");
                exit(EXIT_FAILURE);
        }
        ft_putnbr_fd(a, fd);

        close(fd);
}*/
