/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:24:36 by erramos           #+#    #+#             */
/*   Updated: 2023/10/21 14:56:52 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    int tam = 36;
    int a[tam];
    int i;

    i = 0;
    while (i < tam)
    {
        a[i] = i+1;
        printf("%d ", a[i]);
        i++;
    }
    ft_bzero(a, tam);
    i = 0;
    printf("\n");
    while (i < tam)
    {
        printf("%d ", a[i]);
        i++;
    }
}
*/
