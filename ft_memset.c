/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <erramos@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:02:54 by erramos           #+#    #+#             */
/*   Updated: 2023/10/19 21:58:54 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char		*a;

	a = (char *)s;
	i = 0;
	while (i < n)
	{
		a[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a[10];

	ft_memset(a, 8, 10);
	printf("%d", a[5]);
}*/
