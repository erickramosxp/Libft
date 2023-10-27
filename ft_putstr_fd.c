/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:08:22 by erramos           #+#    #+#             */
/*   Updated: 2023/10/27 18:28:53 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
*/
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*
int     main(void)
{
        char*   file = "out.txt";
        int     fd;
        char    c[] = "makefile";

        fd = open(file, O_RDWR | O_CREAT);
        if (fd == -1)
        {
                perror("open");
                exit(EXIT_FAILURE);
        }
        ft_putstr_fd(c, fd);

        close(fd);
}*/
