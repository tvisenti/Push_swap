/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 08:25:41 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/22 11:56:41 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_display(t_list *lst_a, t_list *lst_b)
{
	printf("\n\t");
	ft_display_a(lst_a);
	printf("\t");
	ft_display_b(lst_b);
	printf("\n");
}

void	ft_display_a(t_list *lst)
{
	t_node	*tmp;

	tmp = lst->head;
	printf("a :");
	while (tmp)
	{
		printf(" %d", tmp->val);
		tmp = tmp->next;
	}
	printf("\n");
}

void	ft_display_b(t_list *lst)
{
	t_node	*tmp;

	tmp = lst->head;
	printf("b :");
	while (tmp)
	{
		printf(" %d", tmp->val);
		tmp = tmp->next;
	}
	printf("\n");
}
