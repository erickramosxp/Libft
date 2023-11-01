/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:54 by erramos           #+#    #+#             */
/*   Updated: 2023/11/01 18:51:45 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static int	count(char *s, char c, int start)
{
	while (s[start] != '\0')
	{
		if (s[start] == c)
			return (start);
		start++;
	}
	return (start);
}

static char	**alloc(char *s, char **mat, char c, int line)
{
	int     contador;
	int     ax;
	int	i;

	i = 0;
	contador = 0;
        ax = 0;
        while (i <= line)
        {
                contador = count(s, c, ax);
//		printf("\nPalavra %d tamanho %d\n", i, contador - ax);
		mat[i] = (char *)malloc((contador - ax + 1) * sizeof(char));
		if (!mat[i])
			return (NULL);
                while (s[contador] == c && s[contador + 1] != '\0')
                        contador++;
                ax = contador;
//		printf("\ntamanho %d\n", ax);
                i++;
        }
	return (mat);
}

static char	**fill_matriz(char *s, char **new, char c, int line)
{
	int	contador;
	int	i;

	i = 0;
	while (i <= line)
	{
		contador = 0;
		contador = count(s, c, contador);
		ft_memcpy(new[i], s, contador);
		new[i][contador] = '\0';
		while (s[contador] == c)
			contador++;
		s = s + contador;
		i++;
	}
	new[i] = (char *)malloc(sizeof(char));
	new[i][0] = '\0';
	return (new);
}

/*
static void	ft_fillsplit(char *s, char **r, char c)
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
	int	i;
	int	line;
	char	**new;
	char	*aux;

	i = 0;
	line = 0;
	aux = ft_strtrim(s, &c);
//	printf("%s", aux);
	while (aux[i] != '\0')
	{
		if (aux[i] != c && aux[i + 1] == c)
			line++;
		i++;
	}
	new = (char **)malloc((line + 2) * sizeof(char *));
	alloc(aux, new, c, line);
	fill_matriz(aux, new, c, line);
//	ft_fillsplit(aux, new, c);
//	printf("%d", line);
	free(aux);	
	return (new);
}
/*
int	main(void)
{
	const char	*a = "     split  this for   me  !  a    ";
	char	**b;

	b = ft_split(a, ' ');
	
	int i = 0;
	while (b[i][0] != '\0')
	{
		printf("Palavra %d: %s\n", i, b[i]);
		i++;
	}
	printf("%s", b[6]);
//   	printf("Nulo :%s \n", b[5]);
	return (0);
}*/
