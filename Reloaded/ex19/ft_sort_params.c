/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:56:29 by danavarr          #+#    #+#             */
/*   Updated: 2024/06/12 12:56:48 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

void	ft_print(int argc, char **argv)
{
	int	i;
	int	b;

	i = 1;
	b = 0;
	while (i < argc)
	{
		while (argv[i][b] != '\0')
		{
			ft_putchar(argv[i][b]);
			b++;
		}
		ft_putchar('\n');
		i++;
		b = 0;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	b;

	i = 1;
	j = 1;
	b = 0;
	while (j < argc -1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				swap(&argv[i], &argv[i + 1]);
			i++;
		}
		j++;
		i = 1;
	}
	i = 1;
	ft_print(argc, argv);
}
