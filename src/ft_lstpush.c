/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 13:33:16 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/18 16:46:42 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_push_a(t_list *lst_a, t_list *lst_b)
{
	t_node	*elem;

	if (lst_a->head != NULL)
	{
		elem = lst_a->head;
		if (lst_b)
		{
			lst_a->head = elem->next;
			elem->next = NULL;
			lst_b->head = elem;
			lst_b->tail = elem;
		}
		// {
		// 	new_head = lst_b->head;
		// 	lst_b->head = elem;
		// 	elem->next = new_head;
		// }
	}
}
