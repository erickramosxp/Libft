/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:50:36 by erramos           #+#    #+#             */
/*   Updated: 2023/10/20 15:56:53 by erramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

int main()
{
    const char *large = "Domingo Barra Adoleta";
    const char *small = "Barra";
    char *ptr;
    
    printf("%s", strnstr(large, small, 13));
    return 0;
}
