/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:19:17 by erramos           #+#    #+#             */
/*   Updated: 2023/10/18 19:36:12 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	char	*dest2;
	char	*src2;
	char	*temp;
	
	dest2 = (char *)dest;
	src2 = (char *)src;
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
	{
		i = 0;
		while (i > n)
                {
                        dest2[i] = src2[i];
                        i++;
                }
	}
	return (dest);
}
/*
int	main(void)
{

}*/
