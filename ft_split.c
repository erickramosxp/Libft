/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:32:54 by erramos           #+#    #+#             */
/*   Updated: 2023/10/25 16:01:29 by erramos          ###   ########.fr       */
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

#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char	**new;
	int	i;
	int	pos;
	int	sep;
	int	aux;
	int	j;
	int	k;
	
	sep = 0;	
	i = 0;
	pos = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			sep++;
		i++;
	}
	new = (char **)malloc((sep + 1) * sizeof(char));
	if (!new)
		return (NULL);
	aux = 0;
	i = 0;
	while (pos < ft_strlen(s))
	{
		position(s, c, &pos);
		if (pos < aux)
		{
			new[i] = (char *)malloc(pos * sizeof(char));
			if (!new)
				return (NULL);
		}
		else
		{
			new[i] = (char *)malloc((pos - aux) * sizeof(char));
			if (!new)
				return (NULL);
		}
		aux = pos;
		pos++;
		i++;
	}
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
			j++;
			k = 0;
			i++;
		}
	}
	return (new);
}

int	main(void)
{
	const char	*a = "bom,outra,vez";
	char	**b;
	int	i;

	b = ft_split(a, ',');
	i = 0;
	printf("Primeira : %s\n", b[0]);
	printf("Segunda :%s \n", b[1]);
	printf("Terceira :%s \n", b[2]);
	printf("Terceira :%s \n", b[3]);
	return (0);
}
