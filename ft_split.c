/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:54 by erramos           #+#    #+#             */
/*   Updated: 2023/10/31 23:41:32 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
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
	int	pos;
	int	aux;
	int	i;
	char	*s2;

	i = 0;
	aux = 0;
	while (i < sep)
	{
		while (*s == c)
			s++;
		aux = position(s, c);	
		//printf("Posição atual %d, tamanho da palavra : %d\n", pos, (pos - aux));
		
		new[i] = ft_substr(s, 0, aux);
//		printf("%s\n", new[i]);

	//	printf("linha %d, tamanho da palavra %d\n%s\n", i, aux, s);
		s = s + aux;
		i++;
	}
	printf("%s\n", new[0]);
	printf("%s\n", new[1]);
	printf("%s\n", new[2]);
	printf("%s\n", new[3]);
	new[i] = '\0';
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
	//printf("linhas :%d\n\n", sep);
	new = malloc((sep + 1) * sizeof(char));
	if (!new)
		return (NULL);
	allocate_space(aux, c, new, sep);
	return (new);
}

int	main(void)
{
	const char	*a = "      split       this for   me  !   a ";
	char	**b;

	b = ft_split(a, ' ');
	
	int i = 0;
       // printf("Palavra %d: %s\n", i, b[0]);
//   	printf("Nulo :%s \n", b[5]);
	return (0);
}
