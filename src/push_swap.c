/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:38:32 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/22 17:14:37 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_les_bonus(t_list *lst_a, t_list *lst_b)
{
	if (g_bonus == 1)
	{
		ft_putstr("\nNombre de nombres : ");
		ft_putnbr(g_argc);
		ft_putstr("\n");
		ft_putstr("\n\nNombre de coups : ");
		ft_putnbr(lst_a->coup + lst_b->coup);
		ft_putstr("\n");
	}
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
	ft_main_quicksort(lst_a, lst_b, lst_a->head);
	ft_les_bonus(lst_a, lst_b);
	return (0);
}
// JE DOIS ECRIRE DANS UN BUFF + FAIRE BONUS
// Nombre de coups && display
