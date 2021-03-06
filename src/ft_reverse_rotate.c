/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 09:46:13 by tvisenti          #+#    #+#             */
/*   Updated: 2016/06/07 12:12:46 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ps_ft_rev_rotate_a(t_list *lst_a, t_list *lst_b)
{
	t_node	*elem;

	if (lst_a->head != NULL && lst_a->head != lst_a->tail)
	{
		elem = lst_a->head;
		while (elem->next != lst_a->tail)
			elem = elem->next;
		elem->next->next = lst_a->head;
		lst_a->head = elem->next;
		elem->next = NULL;
		lst_a->tail = elem;
		ps_ft_buf("rra ", lst_a, lst_b);
	}
}

void	ps_ft_rev_rotate_b(t_list *lst_b, t_list *lst_a)
{
	t_node	*elem;

	if (lst_b->head != NULL && lst_b->head != lst_b->tail)
	{
		elem = lst_b->head;
		while (elem->next != lst_b->tail)
			elem = elem->next;
		elem->next->next = lst_b->head;
		lst_b->head = elem->next;
		elem->next = NULL;
		lst_b->tail = elem;
		ps_ft_buf("rrb ", lst_a, lst_b);
	}
}

void	ps_ft_rev_rotate_rrr(t_list *lst_a, t_list *lst_b)
{
	t_node	*elem;

	if ((lst_a->head != NULL && lst_a->head != lst_a->tail) ||
	(lst_b->head != NULL && lst_b->head != lst_b->tail))
	{
		elem = lst_a->head;
		while (elem->next != lst_a->tail)
			elem = elem->next;
		elem->next->next = lst_a->head;
		lst_a->head = elem->next;
		elem->next = NULL;
		lst_a->tail = elem;
		elem = lst_b->head;
		while (elem->next != lst_b->tail)
			elem = elem->next;
		elem->next->next = lst_b->head;
		lst_b->head = elem->next;
		elem->next = NULL;
		lst_b->tail = elem;
		ps_ft_buf("rrr ", lst_a, lst_b);
	}
}
