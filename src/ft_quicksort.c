/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/20 12:09:40 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/22 11:12:30 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		ft_which_rotate(t_list *lst_a, t_node *cur, t_node *max)
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

void	ft_main_quicksort(t_list *a, t_list *b, t_node *pivot, t_node *cur)
{
	t_node	*min;

	if (ft_check_list_first(a, a->head, a->head->next) == 1)
		return ;
	while (cur != NULL)
	{
		min = ft_min_val(a, a->head);
		while (min != a->head)
		{
			if (ft_which_rotate(a, a->head, min) == 1)
				ft_rotate_a(a);
			else
				ft_rev_rotate_a(a);
		}
		if (ft_check_final(a, b) == 1)
			return ;
		ft_push_b(a, b);
		cur = a->head;
	}
	cur = b->head;
	while (cur != NULL && cur == cur->next)
	{
	// 	cur = cur->next;
		ft_push_a(a, b);
	}
}

t_node	*ft_min_val(t_list *lst_a, t_node *cur)
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

void	ft_sort_a(t_list *lst_a, t_list * lst_b, t_node *pivot, t_node *cur)
{
	while (cur != pivot)
	{
		if (cur->val < pivot->val)
		{
			cur = cur->next;
			ft_rev_rotate_a(lst_a);
		}
		else
		{
			cur = cur->next;
			ft_push_b(lst_a, lst_b);
		}
	}
}

void	ft_sort_b(t_list *lst_a, t_list * lst_b, t_node *pivot, t_node *cur)
{
	while (cur != pivot)
	{
		if (cur->val > pivot->val)
		{
			cur = cur->next;
			ft_rotate_b(lst_b);
		}
		else
		{
			cur = cur->next;
			ft_push_a(lst_a, lst_b);
		}
	}
}
