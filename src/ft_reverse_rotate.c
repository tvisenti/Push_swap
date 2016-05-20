/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 09:46:13 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/20 08:44:02 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_rev_rotate_a(t_list *lst_a)
{
	t_node	*elem;

	if (lst_a->tail != NULL && lst_a->head != lst_a->tail)
	{
		elem = lst_a->head;
		while (elem->next != lst_a->tail)
			elem = elem->next;
		elem->next->next = lst_a->head;
		lst_a->head = elem->next;
		elem->next = NULL;
		write(1, "rra ", 4);
	}
}

void	ft_rev_rotate_b(t_list *lst_b)
{
	t_node	*elem;

	if (lst_b->tail != NULL && lst_b->head != lst_b->tail)
	{
		elem = lst_b->head;
		while (elem->next != lst_b->tail)
			elem = elem->next;
		elem->next->next = lst_b->head;
		lst_b->head = elem->next;
		elem->next = NULL;
		write(1, "rrb ", 4);
	}
}

void	ft_rev_rotate_rrr(t_list *lst_a, t_list *lst_b)
{
	t_node	*elem;

	if ((lst_a->tail != NULL && lst_a->head != lst_a->tail) ||
	(lst_b->tail != NULL && lst_b->head != lst_b->tail))
	{
		elem = lst_a->head;
		while (elem->next != lst_a->tail)
			elem = elem->next;
		elem->next->next = lst_a->head;
		lst_a->head = elem->next;
		elem->next = NULL;
		elem = lst_b->head;
		while (elem->next != lst_b->tail)
			elem = elem->next;
		elem->next->next = lst_b->head;
		lst_b->head = elem->next;
		elem->next = NULL;
		write(1, "rrr ", 4);
	}
}
