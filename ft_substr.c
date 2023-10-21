/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:22:27 by erramos           #+#    #+#             */
/*   Updated: 2023/10/21 17:43:36 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*sub;

	sub = (char *)malloc(len * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < start)
		i++;
	j = 0;
	while (s[i] != '\0' && j < len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	return (sub);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*a = "Algoritmo para todos. la vamos nois";
	char	*b;

	b = ft_substr(a, 9, 10);
	printf("%s", b);
	return (0);
}*/
