/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/20 12:09:40 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/20 15:02:24 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_pivot(t_list *lst_a, t_list *lst_b, t_node *pivot, t_node *cur)
{
	while (cur->next != NULL)
	{
		if (pivot->val < cur->val)
			cur = cur->next;
		else if (pivot->val > cur->val && cur == lst_a->head)
		{
			cur = cur->next;
			ft_push_b(lst_a, lst_b);
		}
		else if (pivot->val < lst_a->head->val &&
			pivot->val > lst_a->head->next->val)
		{
			cur = lst_a->head;
			ft_swap_a(lst_a);
		}
		else
		{
			cur = lst_a->head->next;
			ft_rotate_a(lst_a);
		}
	}
}
