/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_double.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 08:28:41 by tvisenti          #+#    #+#             */
/*   Updated: 2016/06/07 12:17:06 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ps_ft_check_double(t_list *lst, int value)
{
	t_node *elem;

	if (lst)
	{
		elem = lst->head;
		while (elem)
		{
			if (elem->val == value)
				ps_ft_error();
			elem = elem->next;
		}
	}
}
