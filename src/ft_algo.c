/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/20 12:09:40 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/22 17:38:33 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		ft_which_rotate(t_node *cur, t_node *max)
{
	int		len;
	int		find;

	len = 0;
	find = 0;
	while (cur != NULL)
	{
		if (cur == max)
			find = len;
		len++;
		cur = cur->next;
	}
	if (len / 2 < find)
		return (0);
	return (1);
}

t_node	*ft_min_val(t_node *cur)
{
	t_node	*min;

	min = cur;
	while (cur != NULL)
	{
		if (cur->val < min->val)
			min = cur;
		cur = cur->next;
	}
	return (min);
}

void	ft_main_algo(t_list *a, t_list *b, t_node *cur)
{
	t_node	*min;

	if (ft_check_list_first(a, a->head, a->head->next, b) == 1)
		return ;
	while (cur != NULL)
	{
		min = ft_min_val(a->head);
		while (min != a->head)
		{
			if (ft_which_rotate(a->head, min) == 1)
				ft_rotate_a(a, b);
			else
				ft_rev_rotate_a(a, b);
		}
		if (ft_check_final(a, b) == 1)
			return ;
		ft_push_b(a, b);
		cur = a->head;
	}
	cur = b->head;
	while (cur != NULL)
	{
		cur = cur->next;
		ft_push_a(a, b);
	}
}
