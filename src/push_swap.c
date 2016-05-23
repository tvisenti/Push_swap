/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 11:38:32 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/23 10:28:11 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

#include <string.h>

void	ft_les_bonus(t_list *lst_a, t_list *lst_b)
{
	t_node	*cur;

	cur = lst_a->head;
	if (g_bonus == 1)
	{
		ft_putstr("Nombre de nombres : ");
		ft_putnbr(g_argc);
		ft_putstr("\nNombre de coups : ");
		ft_putnbr(lst_a->coup + lst_b->coup);
		ft_putstr("\n");
	}
	while (cur != NULL)
	{
		cur = cur->next;
		free(cur);
	}
	free(lst_a);
	free(lst_b);
}

// int		ft_check_bonus(char *str, int i)
// {
// 	g_bonus = 0;
// 	g_argc = 0;
// 	// printf("str : %s\n", str);
// 	return (i);
// }

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
	// if (strcmp(argv[i], " -b "))
	// 	i = ft_check_bonus(argv[1], i);
	lst_a = ft_lstnew();
	lst_b = ft_lstnew();
	if (argc <= 1 || !lst_a || !lst_b)
		ft_error();
	g_argc = argc - 2;
	while (argc-- > 1)
	{
		nb = ft_atoi(argv[i++]);
		ft_check_double(lst_a, (int)nb);
		lst_a = lstadd(lst_a, (int)nb);
	}
	ft_main_algo(lst_a, lst_b, lst_a->head);
	if (g_i > 0)
		ft_display(lst_a, lst_b);
	ft_les_bonus(lst_a, lst_b);
	return (0);
}
