/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:39:15 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/08/01 12:38:10 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*
static void to_uppercase(unsigned int index, char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c -= 32; // Convierte a mayúscula
}

int	main(void)
{
	char	str[] = "hello, world!";

	ft_striteri(str, to_uppercase);
	printf("Modified string: %s\n", str);

	return (0);
}
*/
