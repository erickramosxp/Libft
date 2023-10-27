/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:58:24 by erramos           #+#    #+#             */
/*   Updated: 2023/10/27 15:11:22 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*s1;
	int	size;

	size = ft_strlen(s);
	i = 0;
	s1 = (char *)malloc((size + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	while (s[i] != '\0')
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
char	toupper_two(unsigned int i, char s)
{
	if (s >= 97 && s <= 122)
		s = s - 32;
	return (s);
}

#include <stdio.h>

int	main(void)
{
	const char	*a = "ortobom";
	char	*b;

	b = ft_strmapi(a, toupper_two);
	printf("%s", b);
}*/
