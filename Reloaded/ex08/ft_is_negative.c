/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:59:23 by danavarr          #+#    #+#             */
/*   Updated: 2024/06/08 18:07:12 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int n);

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
		ft_putchar('N');
}
/*
int	main(void)
{
	int	n;

	n = -8;
	ft_is_negative(n);
	return (0);
}*/
