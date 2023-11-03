/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:10:42 by erramos           #+#    #+#             */
/*   Updated: 2023/11/02 20:32:15 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i] == little[j] && i < len)
			{
				i++;
				j++;
				if (little[j] == '\0')
					return ((char *)&big[i - j]);
			}
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *large = "Domingo Barra";
	const char *small = "Barra";
	
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
//	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0));
	return 0;
}*/
