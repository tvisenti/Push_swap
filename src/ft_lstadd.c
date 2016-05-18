/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 09:53:09 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/18 16:38:18 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_check_double(t_list *lst, int value)
{
	t_node *elem;

	if (lst)
	{
		elem = lst->head;
		while (elem)
		{
			if (elem->val == value)
				ft_error();
			elem = elem->next;
		}
	}
}

t_list		*lstadd(t_list *lst, int value)
{
	t_node *new;

	new = malloc(sizeof(t_node));
	if (lst != NULL && new)
	{
		if (new != NULL)
		{
			new->val = value;
			new->next = NULL;
			if (lst->tail == NULL)
			{
				new->prev = NULL;
				lst->head = new;
				lst->tail = new;
			}
			else
			{
				lst->tail->next = new;
				new->prev = lst->tail;
				lst->tail = new;
			}
			lst->length++;
		}
	}
	return (lst);
}
