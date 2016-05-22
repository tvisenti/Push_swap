/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 11:09:24 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/22 11:54:07 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		ft_check_list_first(t_list *lst_a, t_node *first, t_node *second)
{
	while (second != NULL)
	{
		if (second == lst_a->head->next && first->val > second->val)
		{
			ft_swap_a(lst_a);
			if (ft_check_list_croi(lst_a, lst_a->head, lst_a->head->next) == 1)
				return (1);
		}
		if (second == lst_a->tail && first->val > second->val && lst_a->argc > 3)
		{
			ft_rev_rotate_a(lst_a);
			ft_rev_rotate_a(lst_a);
			ft_swap_a(lst_a);
			ft_rotate_a(lst_a);
			ft_rotate_a(lst_a);
			if (ft_check_list_croi(lst_a, lst_a->head, lst_a->head->next) == 1)
				return (1);
		}
		if (first->val > second->val)
			return (0);
		first = first->next;
		second = second->next;
	}
	return (1);
}

int		ft_check_list_croi(t_list *lst_a, t_node *first, t_node *second)
{
	while (second != NULL)
	{
		if (first->val > second->val)
			return (0);
		first = first->next;
		second = second->next;
	}
	return (1);
}

int		ft_check_list_decroi(t_list *lst_a, t_node *first, t_node *second)
{
	while (second != NULL)
	{
		if (first->val < second->val)
			return (0);
		first = first->next;
		second = second->next;
	}
	return (1);
}

int		ft_check_final(t_list *lst_a, t_list *lst_b)
{
	if (ft_check_list_croi(lst_a, lst_a->head, lst_a->head->next) == 1)
	{
		if (lst_b->head != NULL && lst_b->head->next != NULL &&
			(ft_check_list_decroi(lst_b, lst_b->head, lst_b->head->next) == 1))
		{
			while (lst_b->head != NULL)
				ft_push_a(lst_a, lst_b);
			if (lst_b->head == NULL)
				return (1);
		}
		else
		{
			ft_push_a(lst_a, lst_b);
			return (1);
		}
	}
	return (0);
}
