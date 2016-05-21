/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 09:46:13 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/21 17:56:58 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_rev_rotate_a(t_list *lst)
{
	t_node	*elem;

	if (lst->head != NULL && lst->head != lst->tail)
	{
		elem = lst->head;
		while (elem->next != lst->tail)
			elem = elem->next;
		elem->next->next = lst->head;
		lst->head = elem->next;
		elem->next = NULL;
		lst->tail = elem;
		write(1, "rra ", 4);
		lst->length++;
	}
}

void	ft_rev_rotate_b(t_list *lst)
{
	t_node	*elem;

	if (lst->head != NULL && lst->head != lst->tail)
	{
		elem = lst->head;
		while (elem->next != lst->tail)
			elem = elem->next;
		elem->next->next = lst->head;
		lst->head = elem->next;
		elem->next = NULL;
		lst->tail = elem;
		write(1, "rrb ", 4);
		lst->length++;
	}
}

void	ft_rev_rotate_rrr(t_list *lst_a, t_list *lst_b)
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
		write(1, "rrr ", 4);
		lst_a->length++;
	}
}
