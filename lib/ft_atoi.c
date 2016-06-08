/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:27:36 by tvisenti          #+#    #+#             */
/*   Updated: 2016/06/07 12:18:34 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	ps_ft_check_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || (str[i] >= '0' && str[i] <= '9'))
		i++;
	if (i == ps_ft_strlen(str))
		return (1);
	ps_ft_error();
	return (0);
}

int		ps_ft_atoi(char *str)
{
	long	sign;
	long	nbr;

	sign = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' ||
			*str == '\t' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	nbr = 0;
	while (ps_ft_isdigit((int)*str))
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	if (!(sign * nbr <= 2147483647 && sign * nbr >= -2147483648) ||
		ps_ft_check_digit(str) != 1)
		ps_ft_error();
	return (sign * nbr);
}
