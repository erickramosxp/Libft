/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:03:16 by erramos           #+#    #+#             */
/*   Updated: 2023/11/03 15:05:52 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	position(char const *s, char c)
{
	int	pos;

	pos = 0;
	while (s[pos] != '\0')
	{
		if (s[pos] != c && (s[pos + 1] == c || s[pos + 1] == '\0'))
			return (pos + 1);
		pos++;
	}
	return (pos);
}

char	**allocate_space(const char *s, char c, char **new, int sep)
{
	int	aux;
	int	i;

	i = 0;
	aux = 0;
	while (i < sep)
	{
		while (*s == c)
			s++;
		aux = position(s, c);
		new[i] = ft_substr(s, 0, aux);
		s = s + aux;
		i++;
	}
	new[i] = (char *)malloc(sizeof(char));
	new[i] = NULL;
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	char	*aux;
	int		i;
	int		sep;

	sep = 0;
	i = 0;
	aux = (char *)s;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			sep++;
		i++;
	}
	new = malloc((sep + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	allocate_space(aux, c, new, sep);
	return (new);
}
/*
int	main(void)
{
	const char	*a = "  aaa   abaa   aaca   adaa    ";
	char	**b;

	b = ft_split(a, ' ');
	
	int i = 0;
       	printf("Palavra 0: %s\n", b[0]);
	printf("Palavra 1: %s\n", b[1]);
	printf("Palavra 2: %s\n", b[2]);
	printf("Palavra 3: %s\n", b[3]);
	printf("Palavra 4: %s\n", b[4]);
//   	printf("Nulo :%s \n", b[5]);
	return (0);
}*/
