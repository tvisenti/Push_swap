/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 09:11:23 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/19 11:07:31 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_rotate_a(t_list *lst_a)
{
	t_node	*elem;

	if ((lst_a->head != NULL || lst_a->head->next != NULL) &&
	lst_a->head != lst_a->tail)
	{
		elem = lst_a->head;
		lst_a->head = lst_a->head->next;
		elem->next = NULL;
		lst_a->tail->next = elem;
		elem->prev = lst_a->tail;
		lst_a->tail = elem;
	}
}

void	ft_rotate_b(t_list *lst_b)
{
	t_node	*elem;

	if ((lst_b->head != NULL || lst_b->head->next != NULL) &&
	lst_b->head != lst_b->tail)
	{
		elem = lst_b->head;
		lst_b->head = lst_b->head->next;
		elem->next = NULL;
		lst_b->tail->next = elem;
		elem->prev = lst_b->tail;
		lst_b->tail = elem;
	}
}

void	ft_rotate_rr(t_list *lst_a, t_list *lst_b)
{
	ft_rotate_a(lst_a);
	ft_rotate_b(lst_b);
}
