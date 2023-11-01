/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:54 by erramos           #+#    #+#             */
/*   Updated: 2023/11/01 14:29:22 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	position(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i + 1] == c)
				return (i + 1);
		i++;
	}
	return (i);
}
char	**allocate_spaces(const char *s, char **mat, char c, int line)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (i < line)
	{
		while (*s == c)
			s++;
		aux = position(s, c);
		printf("%s\n", s);
		mat[i] = (char *)malloc((aux + 1)* sizeof(char));
		if (!mat[i])
			return (NULL);
		s = s + aux;
		ft_memcpy(mat[i], (s - aux), aux);
		mat[i][aux] = '\0';

//		printf("palavra:%s quantidade de letras %d\n",(s - aux), aux);
//		printf("string : %s pos :%d letras: %d\n", s, i, aux);
//		printf("string menos a anterior :%s\n", (s - aux));
//		mat[i] = ft_substr((s - aux) , 0, aux);
		i++;
	}
	i = 0;
/*      	while (i < line)
        {
                printf("%s\n", mat[i]);
                i++;
        }*/
	return (mat);
}
char	**ft_split(char const *s, char c)
{
	char	**matr;
	size_t	i;
	int	line;
	
	line = 0;
	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			line++;
		i++;
	}
	matr = (char **)malloc((line + 1) * sizeof(char));
	allocate_spaces(s, matr, c, line);
//	i = 0;
/*	while (i < line)
        {
		printf("%s\n", matr[i]);
                i++;
        }*/
//	printf("%d", sep);
	return (matr);
}

int	main(void)
{
	const char	*a = " foi-se  vim   coisa   outra  bc  a   split  ola     this for   me  !   a ";
	char	**b;

	b = ft_split(a, ' ');
	
	int i = 0;
       // printf("Palavra %d: %s\n", i, b[0]);
//   	printf("Nulo :%s \n", b[5]);
	return (0);
}
