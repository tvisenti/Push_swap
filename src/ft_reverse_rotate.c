/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 09:46:13 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/19 11:24:18 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_rev_rotate_a(t_list *lst_a)
{
	t_node	*elem;

	if ((lst_a->tail != NULL || lst_a->tail->prev != NULL) &&
	lst_a->head != lst_a->tail)
	{
		elem = lst_a->tail;
		lst_a->tail = lst_a->tail->prev;
		lst_a->tail->next = NULL;
		elem->prev = NULL;
		lst_a->head->prev = elem;
		elem->next = lst_a->head;
		lst_a->head = elem;
	}
}

void	ft_rev_rotate_b(t_list *lst_b)
{
	t_node	*elem;

	if ((lst_b->tail != NULL || lst_b->tail->prev != NULL) &&
	lst_b->head != lst_b->tail)
	{
		elem = lst_b->tail;
		lst_b->tail = lst_b->tail->prev;
		lst_b->tail->next = NULL;
		elem->prev = NULL;
		lst_b->head->prev = elem;
		elem->next = lst_b->head;
		lst_b->head = elem;
	}
}

void	ft_rev_rotate_rrr(t_list *lst_a, t_list *lst_b)
{
	ft_rev_rotate_a(lst_a);
	ft_rev_rotate_b(lst_b);
}
