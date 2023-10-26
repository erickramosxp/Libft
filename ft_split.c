/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:54 by erramos           #+#    #+#             */
/*   Updated: 2023/10/26 19:04:09 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	position(char const *s, char c, int *pos)
{
	while (s[*pos] != '\0')
        {
                if (s[*pos] == c && s[*pos + 1] != c)
                        return (*pos);
		*pos = *pos + 1;
        }
	return (0);
}

char	**allocate_space(char *s, char c, char **new)
{
	int	pos;
	int	aux;
	int	i;
	
	i = 0;
	aux = 0;
	pos = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c)
			{
				i++;
			}
			new[pos] = (char *)malloc(((i - aux) + 1) * sizeof(char));
			if (!new)
				return (NULL);
			while (s[i] == c)
				i++;
			printf("%d", aux);
			aux = i;
			pos++;
		}
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
			while (s[i] == c)
				i++;
			j++;
			k = 0;
		}
	}
	return (new);
}

#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char	**new;
	int	i;
	int	sep;
	char	*t;
	
	t = ft_strtrim(s, &c);
	sep = 0;	
	i = 0;
	while (t[i] != '\0')
	{
		if (t[i] == c && t[i - 1] != c)
			sep++;
		i++;
	}
	new = (char **)malloc((sep + 1) * sizeof(char));
	if (!new)
		return (NULL);
	allocate_space(t, c, new);
	//fill_matriz(t, c, new);
	return (new);
}

int	main(void)
{
	const char	*a = ",,,,bom,,,outra,vez,,,,";
	char	**b;

	b = ft_split(a, ',');
	printf("Primeira : %s\n", b[0]);
	printf("Segunda : %s \n", b[1]);
	printf("Terceira : %s \n", b[2]);
	//printf("Nulo : %s \n", b[3]);
	return (0);
}
