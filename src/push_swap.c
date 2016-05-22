/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:38:32 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/22 17:41:35 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_les_bonus(t_list *lst_a, t_list *lst_b)
{
	if (g_bonus == 1)
	{
		ft_putstr("\nNombre de nombres : ");
		ft_putnbr(g_argc);
		ft_putstr("\nNombre de coups : ");
		ft_putnbr(lst_a->coup + lst_b->coup);
		ft_putstr("\n");
	}
}

void	ft_print_list(t_list *lst_a, t_list *lst_b)
{
	write(1, g_buf, g_i - 1);
	if (g_bonus == 1)
	{
		ft_putchar('\n');
		ft_display_a_b(lst_a, lst_b);
	}
	ft_bufset();
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	t_list	*lst_a;
	t_list	*lst_b;
	long	nb;
	int		i;

	i = 1;
	ft_bufset();
	g_bonus = 0;
	g_argc = 0;
	lst_a = ft_lstnew();
	lst_b = ft_lstnew();
	if (argc <= 1 || !lst_a || !lst_b)
		ft_error();
	g_argc = argc - 1;
	while (argc-- > 1)
	{
		nb = ft_atoi(argv[i++]);
		ft_check_double(lst_a, (int)nb);
		lst_a = lstadd(lst_a, (int)nb);
	}
	ft_main_algo(lst_a, lst_b, lst_a->head);
	if (g_i > 0)
		ft_print_list(lst_a, lst_b);
	ft_les_bonus(lst_a, lst_b);
	return (0);
}
