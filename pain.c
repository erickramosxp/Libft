/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:08:02 by erramos           #+#    #+#             */
/*   Updated: 2023/10/20 14:08:30 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int     main(void)
{
        char    *c = "Hello world";
        char    *a = "Hello world";
        int     result;

        result = ft_memcmp(c, a, 5);
        if (result == 1)
                printf("A primeira é maior que a segunda.\n");
        else if (result == -1)
                printf("A segunda é maior que a primeira.\n");
        else
                printf("As duas são iguais.\n");
}

