/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:29:54 by erramos           #+#    #+#             */
/*   Updated: 2023/11/02 19:34:42 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
*/
void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
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
        ft_putendl_fd(c, fd);

        close(fd);
}*/
