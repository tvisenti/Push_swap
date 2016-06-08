/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 15:57:59 by tvisenti          #+#    #+#             */
/*   Updated: 2016/06/07 12:16:56 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ps_ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ps_ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ps_ft_putchar(str[i]);
		i++;
	}
}

void	ps_ft_putnbr(int n)
{
	if (n < 0)
	{
		ps_ft_putchar('-');
		n = -n;
	}
	if ((unsigned int)n > 9)
	{
		ps_ft_putnbr((unsigned int)n / 10);
		ps_ft_putnbr((unsigned int)n % 10);
	}
	else
		ps_ft_putchar((unsigned int)n + '0');
}
