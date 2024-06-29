/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:16:37 by danavarr          #+#    #+#             */
/*   Updated: 2024/06/14 20:49:10 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>
void ft_plus(int c)
{
	c = c + 1;
	printf("%d\n", c);
}

int	main(void)
{
	int	tab[4];
	int	length;

	tab[0] = 4;
	tab[1] = 3;
	tab[2] = 6;
	tab[3] = 2;
	length = 4;
	ft_foreach(tab, length, &ft_plus);
	printf("%d\n", tab[0]);

printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d\n", tab[3]);
	return (0);
}*/
