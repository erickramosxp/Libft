/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:23:55 by erramos           #+#    #+#             */
/*   Updated: 2023/10/21 13:53:48 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	resp;
	int	signal;
	int	i;

	i = 0;
	resp = 0;
	signal = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			signal = signal *(-1);
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		resp = resp * 10 + (nptr[i] - '0');
		i++;
	}
	return (resp * signal);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*a = "\n\n\n  -46\b9 \n5d6";

	printf("%d\n", ft_atoi(a));
	printf("test 7: %d\n", ft_atoi("+-54"));
	printf("test 8: %d\n", ft_atoi("-+48"));
	printf("test 9: %d\n", ft_atoi("-+47"));
	printf("test 10: %d\n", ft_atoi("++47"));
	return (0);
}*/
