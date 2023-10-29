/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:17:15 by erramos           #+#    #+#             */
/*   Updated: 2023/10/29 12:54:17 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, char *src, size_t n)
{
	size_t	size_dest;
	size_t	j;

	size_dest = ft_strlen(dest);
	j = 0;
	if (size_dest >= n)
		return (ft_strlen(src) + n);
	while (src[j] != '\0' && j < n - 1)
	{
		dest[size_dest] = src[j];
		size_dest++;
		j++;
	}
	dest[size_dest] = '\0';
	return (size_dest + j);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "Fluminense";
	char	b[] = "Campeão";

	printf("%ld", ft_strlcat(a, b, 4));
}*/
