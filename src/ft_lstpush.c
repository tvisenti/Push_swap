/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 13:33:16 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/19 09:36:09 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_push_a(t_list *lst_a, t_list *lst_b)
{
	t_node	*elem;

	if (lst_a->head != NULL)
	{
		elem = lst_a->head;
		if (lst_b->head == NULL)
		{
			lst_a->head = elem->next;
			elem->next = NULL;
			lst_b->head = elem;
			lst_b->tail = elem;
		}
		else
		{
			lst_a->head = elem->next;
			elem->next = lst_b->head;
			lst_b->head = elem;
		}
		lst_a->length--;
		lst_b->length++;
	}
}

void	ft_push_b(t_list *lst_a, t_list *lst_b)
{
	t_node	*elem;

	if (lst_b->head != NULL)
	{
		elem = lst_b->head;
		if (lst_a->head == NULL)
		{
			lst_b->head = elem->next;
			elem->next = NULL;
			lst_a->head = elem;
			lst_a->tail = elem;
		}
		else
		{
			lst_b->head = elem->next;
			elem->next = lst_a->head;
			lst_a->head = elem;
		}
		lst_a->length++;
		lst_b->length--;
	}
}
