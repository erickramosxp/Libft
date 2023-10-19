/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:44:33 by erramos           #+#    #+#             */
/*   Updated: 2023/10/19 18:28:05 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i != -1)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *str = "trytoprogram.com";
	//char ch[1] = "m";

	printf("String = \"%s\"\n\n", str);
	if(strrchr(str, 'm') != NULL ) //checking for null pointer
	{
		printf("\n\'m\' was found in \"%s\".\n", str);
		printf("%s", ft_strrchr(str, 'm'));
	}
	else
		printf("\n\'m\' was not found in \"%s\".\n", str);
}*/
