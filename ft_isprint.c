/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <erramos@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:28:13 by erramos           #+#    #+#             */
/*   Updated: 2023/10/17 16:44:09 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		printf("Ascii: %d Minha: %d", i, ft_isprint(i));
		printf("\t Original: %d\n", isprint(i));
		i++;
	}
}*/
