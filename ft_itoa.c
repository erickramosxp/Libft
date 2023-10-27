/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:47:17 by erramos           #+#    #+#             */
/*   Updated: 2023/10/27 20:06:41 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	check_digits(int value, int *signal)
{
	int	digit;

	digit = 0;
	if (value < 0)
	{
		value = -value;
		digit++;
		*signal = 1;
	}
	while (value != 0)
	{
		digit++;
		value = value / 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int		digit;
	char	*new;
	int		signal;

	digit = check_digits(n, &signal);
	new = (char *)malloc((digit + 1) * sizeof(char));
	if (!new)
		return (NULL);
	new[digit] = '\0';
	digit--;
	if (n < 0)
		n = -n;
	while (0 < digit)
	{
		new[digit] = (n % 10) + '0';
		n = n / 10;
		digit--;
	}
	if (signal)
		new[0] = '-';
	return (new);
}
/*
int	main(void)
{
	char	*a;

	a = ft_itoa(-12345);

	printf("%s", a);
}*/
