/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:49:03 by erramos           #+#    #+#             */
/*   Updated: 2023/10/27 07:53:57 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char a, const char *b)
{
	int	i;

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		k;
	int		j;
	int		i;

	i = 0;
	j = ft_strlen(s1) - 1;
	k = 0;
	while (s1[i] != '\0' && check(s1[i], set))
		i++;
	while (j >= 0 && check(s1[j], set))
		j--;
	if (i > j)
		return (ft_strdup(""));
	new = (char *)malloc(((j - i + 1) * sizeof(char)) + 1);
	if (!(new))
		return (NULL);
	while (i <= j)
	{
		new[k] = s1[i];
		i++;
		k++;
	}
	new[k] = '\0';
	return (new);
}
/*
#include <stdio.h>
int	main(void)
{
	const char      *a = ",,,,,bom,,,,,,,,outra,,,,,,,,vez,,,,,,";
	const char	*b = ",";

	printf("%s", ft_strtrim(a, b));
	return (0);
}*/
