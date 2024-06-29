/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:31:50 by danavarr          #+#    #+#             */
/*   Updated: 2024/06/10 19:39:35 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int	main(void)
{
	char	*s1 = "The Blue house";
	char	*s2 = "The Blue housesssss";
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}*/
