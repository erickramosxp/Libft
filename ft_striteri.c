/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:25:56 by erramos           #+#    #+#             */
/*   Updated: 2023/10/27 16:12:42 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, (s+i));
		i++;
	}
}
/*
void    toupper_two(unsigned int i, char *s)
{
        if (*s >= 97 && *s <= 122)
                *s = *s - 32;
}

#include <stdio.h>

int     main(int c, char **av)
{
	char a[] = "Ortobom";
	(void)c;
        ft_striteri(a, toupper_two);
        printf("%s", a);
}*/
