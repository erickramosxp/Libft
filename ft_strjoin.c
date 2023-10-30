/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:46:41 by erramos           #+#    #+#             */
/*   Updated: 2023/10/30 18:38:48 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*news;

	len = ft_strlen(s1) + ft_strlen(s2);
	news = (char *)malloc((len + 1) * sizeof(char));
	if (news == NULL)
		return (NULL);
	ft_memmove(news, (char *)s1, len + 1);
	ft_strlcat(news, (char *)s2, len + 1);
	news[len] = '\0';
	return (news);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*a = "arroz";
	char	*b = "feijão";

	//ft_strcat(a, b);
	printf("%s", ft_strjoin(a, b));
}*/
