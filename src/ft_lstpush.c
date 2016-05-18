/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 13:33:16 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/18 17:02:15 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_push_a(t_list *lst_a, t_list *lst_b)
{
	t_node	*elem;

	if (lst_a->head != NULL)
	{
		printf("head : %p\n", lst_a->head);
		printf("tail : %p\n", lst_a->tail);
		elem = lst_a->head;
		if (lst_b)
		{
			lst_a->head = elem->next;
			printf("val : %d\n", elem->val);
			elem->next = NULL;
			lst_b->head = elem;
			lst_b->tail = elem;
			printf("val : %d\n", elem->val);
			printf("head : %p\n", lst_b->head);
			printf("tail : %p\n", lst_b->tail);
		}
		// {
		// 	new_head = lst_b->head;
		// 	lst_b->head = elem;
		// 	elem->next = new_head;
		// }
	}
}
