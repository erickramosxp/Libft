/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:54 by erramos           #+#    #+#             */
/*   Updated: 2023/10/31 15:16:36 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
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
		printf("Posição atual %d, tamanho da palavra : %d\n", pos, (pos - aux));
		new[i] = (char *)malloc((pos - aux + 1) * sizeof(char));
		printf("%d\n\n", i);
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
		if (s[i] == c || s[i] == '\0')
		{
			new[j][k] = '\0';
			j++;
			k = 0;
		}
		while (s[i] == c && s[i + 1] != '\0')
			i++;
	}
	new[j] = (char *)malloc(sizeof(char));
	new[j][0] = '\0';
	return (new);
}

/*
static void	fill_matriz(char *s, char **r, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			r[j][k] = s[i];
			k++;
		}
		if (s[i] == c || s[i + 1] == '\0')
		{
			r[j][k] = '\0';
			k = 0;
			j++;
			while (s[i + 1] == c && s[i + 1] != '\0')
				i++;
		}
		i++;
	}
}
*/
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
		if (aux[i] == c && aux[i + 1] != c)
			sep++;
		i++;
	}
	printf("linhas :%d\n\n", sep);
	new = malloc((sep + 2) * sizeof(char));
	if (!new)
		return (NULL);
	allocate_space(aux, c, new);
//	fill_matriz(aux, c, new);
	return (new);
}
/*
int	main(void)
{
	const char	*a = "      split       this for   me  !     ";
	char	**b;

	b = ft_split(a, ' ');
	int i = 0;
	while (b[i])
	{
        	printf("Palavra %d: %s\n", i, b[i]);
        	free(b[i]); // Libere a memória de cada palavra
        	i++;
	}
	free(b);
//   	printf("Nulo :%s \n", b[5]);
	return (0);
}*/
