/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:17:15 by erramos           #+#    #+#             */
/*   Updated: 2023/11/02 20:07:57 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, char *src, size_t n)
{
	size_t	size_dest;
	size_t	total_size;
	size_t	j;

	size_dest = ft_strlen(dest);
	j = 0;
	if (size_dest >= n)
		return (n + ft_strlen(src));
	else if ((n - size_dest - 1) > 0)
	{
		while (src[j] != '\0' && size_dest < n - 1)
		{
			dest[size_dest] = src[j];
			size_dest++;
			j++;
		}
		dest[size_dest] = '\0';
	}
	total_size = size_dest + ft_strlen(src) - j;
	return (total_size);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "rrrrrrrrrrrrrr";
	char	b[] = "lorem ipsum dolor sit amet";

	printf("%ld", ft_strlcat(a, b, 15));
}*/
