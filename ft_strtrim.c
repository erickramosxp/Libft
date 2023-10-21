/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:49:03 by erramos           #+#    #+#             */
/*   Updated: 2023/10/21 20:35:20 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int	new_size;
	int	num_set;
	int	i;

	i = 0;
	num_set = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == set)
			num_set += 1;
	}
	new = (char *)malloc((ft_strlen((char *)s1) - num_set) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != set)
		{
			new[j] = s1[i];
			j++;
		}
		i++;
	}
	return (new);
}

int	main(void)
{
	printf("%s");
	return (0);
}
