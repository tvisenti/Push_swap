/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 09:53:09 by tvisenti          #+#    #+#             */
/*   Updated: 2016/06/07 12:10:04 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list		*ps_lstadd(t_list *lst, int value)
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
				lst->head = new;
				lst->tail = new;
			}
			else
			{
				lst->tail->next = new;
				lst->tail = new;
			}
		}
		lst->argc++;
	}
	return (lst);
}
