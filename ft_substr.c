/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:22:27 by erramos           #+#    #+#             */
/*   Updated: 2023/10/30 15:43:56 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	//unsigned int	i;
	unsigned int	j;
	char			*sub;

	if(!s || !len)
		return (NULL);
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
//	i = 0;
	/*while (i < start)
		i++;*/
	j = 0;
	while (s[start] != '\0' && j < len &&  start <= ft_strlen(s))
	{
		sub[j] = s[start];
		start++;
		j++;
	}
	sub[j] = '\0';
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
