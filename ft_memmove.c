/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:19:17 by erramos           #+#    #+#             */
/*   Updated: 2023/10/27 13:58:03 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest2;
	char	*src2;

	dest2 = (char *)dest;
	src2 = (char *)src;
	if (!dest2 && !src2)
		return (NULL);
	if (dest2 > src2)
	{
		i = n - 1;
		while (i >= 0)
		{
			dest2[i] = src2[i];
			i--;
		}
	}
	else
		ft_memcpy(dest2, src2, n);
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	a[] = "Fluminense";
	char	b[] = "Campeão";

	ft_memmove(a, b, 4);

	printf("%s", a);
	return (0);
}
