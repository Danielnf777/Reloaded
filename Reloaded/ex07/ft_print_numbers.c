/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:54:19 by danavarr          #+#    #+#             */
/*   Updated: 2024/06/07 18:14:52 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int a);

void	ft_print_numbers(void)
{
	int	a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
