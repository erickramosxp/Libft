/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:47:17 by erramos           #+#    #+#             */
/*   Updated: 2023/10/25 20:12:22 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static int	check_digits(int value)
{
	int	digit;

	digit = 0;
	while (value != 0)
        {
                digit++;
                value = value / 10;
        }
	return (digit);
}
char	*ft_itoa(int n)
{
	int	value;
	int	digit;
	int	i;
	char	*new;

	value = n;
	digit = check_digits(n);
	new = (char *)malloc((digit + 1) * sizeof(char *));
	if (!new)
		return (NULL);

	return (new);
}

int	main(void)
{
	char	*a;

	a = ft_itoa(12345);

	printf("%s", a);
}
