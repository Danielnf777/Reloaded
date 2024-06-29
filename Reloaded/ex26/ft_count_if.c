/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 00:50:04 by danavarr          #+#    #+#             */
/*   Updated: 2024/06/15 03:36:21 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}
/*int	ft_count(char *as)
{
	int	i;

	i = 0;
	if (as == NULL)
		return (0);
	while (as[i] != '\0')
	{
		i++;
	}
	if (i > 4)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char *tab[] = {"HOLA", "beautiful", "REDios", "paradise"};

	ft_count_if(tab, ft_count);
	printf("%d", ft_count_if(tab, ft_count));
	return (0);
}*/			
