/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:54 by erramos           #+#    #+#             */
/*   Updated: 2023/10/28 17:09:21 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	position(char const *s, char c, int *pos)
{
	while (s[*pos] != '\0')
	{
		if (s[*pos] == c)
			return (*pos);
		*pos = *pos + 1;
	}
	return (0);
}

char	**allocate_space(const char *s, char c, char **new)
{
	int	pos;
	int	aux;
	int	i;
	int	len_s;

	i = 0;
	aux = 0;
	pos = 0;
	len_s = ft_strlen(s);
	while (pos < len_s)
	{
		position(s, c, &pos);
		new[i] = (char *)malloc((pos - aux + 1) * sizeof(char));
		if (!new)
			return (NULL);
		while (s[pos] == c)
			pos++;
		aux = pos;
		i++;
	}
	return (new);
}

char	**fill_matriz(const char *s, char c, char **new)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	j = 0;
	while (s[i] != '\0')
	{
		new[j][k] = s[i];
		i++;
		k++;
		if (s[i] == c)
		{
			new[j][k] = '\0';
			j++;
			k = 0;
		}
		while (s[i] == c)
			i++;
	}
	new[j + 1] = '\0';
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
	aux = ft_strtrim(s, &c);
	while (aux[i] != '\0')
	{
		if (aux[i] == c)
			sep++;
		i++;
	}
	new = (char **)malloc((sep + 2) * sizeof(char));
	if (!new)
		return (NULL);
	allocate_space(aux, c, new);
	fill_matriz(aux, c, new);
	return (new);
}
/*
int	main(void)
{
	const char	*a = ",,,,,bom,,,,,,,,outra,,,,,,,,vez,,,,,";
	char	**b;

	b = ft_split(a, ',');
	printf("Primeira :%s\n", b[0]);
	printf("Segunda :%s \n", b[1]);
	printf("Terceira :%s \n", b[2]);
   	printf("Nulo :%s \n", b[3]);
	return (0);
}*/
