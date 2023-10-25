/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:59:35 by erramos           #+#    #+#             */
/*   Updated: 2023/10/24 21:43:50 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*output;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	output = malloc(size * nmemb);
	if (output == NULL)
		return (NULL);
	ft_bzero(output, size);
	return (output);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*a;
	int	i;

	a = (char *)ft_calloc(10, sizeof(char));
	i = 0;
	while (i < 10)
	{
		a[i] = i + '0';
		printf("%c", a[i]);
		i++;
	}
	return (0);
}*/
