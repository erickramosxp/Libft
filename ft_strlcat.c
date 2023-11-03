/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:17:15 by erramos           #+#    #+#             */
/*   Updated: 2023/11/03 18:37:24 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, char *src, size_t n)
{
	size_t	len_dest;
	size_t	total_size;
	size_t	j;

	len_dest = ft_strlen(dest);
	j = 0;
	if (n == 0)
		return (ft_strlen(src));
	if (n > len_dest)
		total_size = len_dest + ft_strlen(src);
	else
		total_size = n + ft_strlen(src);
	if ((n - len_dest - 1) > 0)
	{
		while (src[j] != '\0' && len_dest < n - 1)
		{
			dest[len_dest] = src[j];
			len_dest++;
			j++;
		}
		dest[len_dest] = '\0';
	}
	return (total_size);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char	b[] = "there is no stars in the sky";
	char    c[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char    d[] = "there is no stars in the sky";

	printf("%ld\n", ft_strlcat(a, b, ft_strlen(a) + 4));
	printf("%ld", strlcat(c, d, ft_strlen(c) + 4));
}*/
