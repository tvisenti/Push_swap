/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/20 12:09:40 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/21 18:17:59 by tvisenti         ###   ########.fr       */
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

// void	ft_check_list(t_list *lst_a)
// {
//
// }

void	ft_main_quicksort(t_list *a, t_list *b, t_node *pivot, t_node *cur)
{
	t_node	*max;

	max = ft_max_val(a, a->head);
	// ft_check_list(a);
	while (cur != NULL)
	{
		while (max != a->head)
		{
			if (ft_which_rotate(a, a->head, max) == 1)
				ft_rotate_a(a);
			else
				ft_rev_rotate_a(a);
		}
		ft_push_b(a, b);
		max = ft_max_val(a, a->head);
		cur = a->head;
	}
	cur = b->head;
	while (cur != NULL)
	{
		cur = cur->next;
		ft_push_a(a, b);
	}
}

t_node	*ft_max_val(t_list *lst_a, t_node *cur)
{
	t_node	*max;

	max = cur;
	while (cur != NULL)
	{
		if (cur->val < max->val)
			max = cur;
		cur = cur->next;
	}
	return (max);
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

// while (cur_a->next != NULL)
// {
// 	printf("piv->a : %d\n", pivot_a->val);
// 	printf("cur->a : %d\n", cur_a->val);
// 	ft_sort_a(lst_a, lst_b, lst_a->head, lst_a->head->next);
// 	break;
// 	if (cur_b == NULL)
// 	{
// 		cur_b = lst_b->head;
// 		pivot_b = lst_b->tail;
// 	}
// 	else
// 	{
// 		cur_b = cur_b->next;
// 		pivot_b = lst_b->tail;
// 	}
// 	ft_sort_b(lst_a, lst_b, pivot_b, cur_b);
// 	cur_a = lst_a->head->next;
// 	pivot_a = lst_a->tail;
// }

// void	ft_pivot(t_list *lst_a, t_list *lst_b, t_node *pivot, t_node *cur)
// {
// 	while (cur->next != NULL)
// 	{
// 		if (pivot->val < cur->val)
// 			cur = cur->next;
// 		else if (pivot->val > cur->val && cur == lst_a->head)
// 		{
// 			cur = cur->next;
// 			ft_push_b(lst_a, lst_b);
// 		}
// 		else if (pivot->val < lst_a->head->val &&
// 			pivot->val > lst_a->head->next->val)
// 		{
// 			cur = lst_a->head;
// 			ft_swap_a(lst_a);
// 		}
// 		else
// 		{
// 			cur = lst_a->head->next;
// 			ft_rotate_a(lst_a);
// 		}
// 	}
// 	// ft_quicksort(lst_a, lst_a->tail, lst_a->head);
// 	// ft_quicksort(lst_b, lst_b->tail, lst_b->head);
// }
