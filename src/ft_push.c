/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 13:33:16 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/19 14:45:21 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_push_a(t_list *lst_a, t_list *lst_b)
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

void	ft_push_b(t_list *lst_a, t_list *lst_b)
{
	t_node	*elem;

	if (lst_a->head != NULL)
	{
		elem = lst_a->head;
		if (lst_b->head == NULL)
		{
			printf("1\n");
			lst_a->head = elem->next;
			elem->next = NULL;
			lst_b->head = elem;
			lst_b->tail = elem;
		}
		else if (lst_b->head == lst_b->tail)
		{
			printf("2\n");
			lst_a->head = elem->next;
			elem->next = lst_b->head;
			lst_b->head = elem;
			lst_b->tail = elem->next;
			// lst_b->tail->prev = elem->next;
			elem->prev = NULL;

			printf("     elem prev: %p\n", elem->prev);
			printf("     elem next: %p\n", elem->next);
			printf("     elem: %p\n", elem);
			printf("      tail prev: %p\n", lst_b->tail->prev);
			printf("      tail: %p\n", lst_b->tail);

		}
		else
		{
			printf("3\n");
			lst_a->head = elem->next;
			elem->next = lst_b->head;
			lst_b->head = elem;
		}
		lst_a->length--;
		lst_b->length++;
	}
}

// printf("first head a: %p\n", lst_a->head);
// printf("first head b: %p\n", lst_b->head);
// printf("first tail a: %p\n", lst_a->tail);
// printf("first tail b: %p\n", lst_b->tail);
// printf("      head a: %p\n", lst_a->head);
// printf("      head b: %p\n", lst_b->head);
// printf("      tail a: %p\n", lst_a->tail);
// printf("      tail prev b: %p\n", lst_b->tail->prev);
