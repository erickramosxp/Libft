/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:53:33 by erramos           #+#    #+#             */
/*   Updated: 2023/10/19 21:54:03 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (p[i] != '\0' && i < n)
	{
		if (p[i] == c)
			return ((char *)(p + i));
		i++;
	}
	return (NULL);
}
