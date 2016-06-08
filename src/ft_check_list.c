/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 11:09:24 by tvisenti          #+#    #+#             */
/*   Updated: 2016/06/07 12:11:22 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		ps_ft_check_tail(t_list *lst_a, t_list *lst_b)
{
	ps_ft_rev_rotate_a(lst_a, lst_b);
	if (ps_ft_check_list_croi(lst_a->head, lst_a->head->next) == 1)
		return (1);
	ps_ft_rev_rotate_a(lst_a, lst_b);
	ps_ft_swap_a(lst_a, lst_b);
	ps_ft_rotate_a(lst_a, lst_b);
	ps_ft_rotate_a(lst_a, lst_b);
	if (ps_ft_check_list_croi(lst_a->head, lst_a->head->next) == 1)
		return (1);
	return (0);
}

int		ps_ft_check_list_first(t_list *lst_a, t_node *back, t_node *front,
	t_list *lst_b)
{
	if (lst_a->argc > 3 && lst_a->head->val < lst_a->head->next->val &&
		lst_a->head->val < lst_a->tail->val &&
		lst_a->head->next->val > lst_a->tail->val)
	{
		if (ps_ft_check_list_croi(lst_a->head, lst_a->head->next) == 0)
			return (0);
	}
	while (front != NULL)
	{
		if (front == lst_a->head->next && back->val > front->val)
		{
			ps_ft_swap_a(lst_a, lst_b);
			if (ps_ft_check_list_croi(lst_a->head, lst_a->head->next) == 1)
				return (1);
		}
		if (front == lst_a->tail && back->val > front->val &&
			lst_a->argc > 3 && ps_ft_check_tail(lst_a, lst_b) == 1)
			return (1);
		if (back->val > front->val)
			return (0);
		back = back->next;
		front = front->next;
	}
	return (ps_ft_check_list_croi(lst_a->head, lst_a->tail) == 0) ? 1 : 0;
}

int		ps_ft_check_list_croi(t_node *back, t_node *front)
{
	while (front != NULL)
	{
		if (back->val > front->val)
			return (0);
		back = back->next;
		front = front->next;
	}
	return (1);
}

int		ps_ft_check_list_decroi(t_node *back, t_node *front)
{
	while (front != NULL)
	{
		if (back->val < front->val)
			return (0);
		back = back->next;
		front = front->next;
	}
	return (1);
}

int		ps_ft_check_final(t_list *lst_a, t_list *lst_b)
{
	if (ps_ft_check_list_croi(lst_a->head, lst_a->head->next) == 1)
	{
		if (lst_b->head != NULL && lst_b->head->next != NULL &&
			(ps_ft_check_list_decroi(lst_b->head, lst_b->head->next) == 1))
		{
			while (lst_b->head != NULL)
				ps_ft_push_a(lst_a, lst_b);
			if (lst_b->head == NULL)
				return (1);
		}
		else
		{
			ps_ft_push_a(lst_a, lst_b);
			return (1);
		}
	}
	return (0);
}
