/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:23:55 by erramos           #+#    #+#             */
/*   Updated: 2023/10/20 18:05:39 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	resp;
	int	signal;
	int	i;
	
	i = 0;
	resp = 0;
	signal = 1;
	while (nptr[i] != '\0')
	{
		if (nptr[i] == '\t' || nptr[i] == ' ')
		{
			i++;
		}
		else if (nptr[i] == '+' || nptr[i] == '-')
		{
			if (nptr[i] == '-')
				signal = signal *(-1);
			i++;
		}
		else if (nptr[i] >= 48 && nptr[i] <= 57)
		{
			resp = resp * 10 + (nptr[i] - '0');
			i++;
		}
		else if (!(nptr[i] >= 48 && nptr[i] <= 57))
			return (resp * signal);
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	char	*a = "--++--1234abc254de";

	printf("%d", ft_atoi(a));
	return (0);
}
