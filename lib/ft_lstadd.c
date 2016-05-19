/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 09:53:09 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/19 08:35:47 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list		*lstadd(t_list *lst, int value)
{
	t_node	*new;

	if (lst != NULL)
	{
		if ((new = (t_node*)malloc(sizeof(t_node))) != NULL)
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