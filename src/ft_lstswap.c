/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 11:23:23 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/18 16:14:53 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_lstswap_a(t_list *lst_a)
{
	int		tmp;
	t_node	*first;
	t_node	*second;

	if (lst_a)
	{
		first = lst_a->head;
		second = lst_a->head->next;
		tmp = first->val;
		first->val = second->val;
		second->val = tmp;
	}
}

void	ft_lstswap_b(t_list *lst_b)
{
	int		tmp;
	t_node	*head;
	t_node	*second;

	if (lst_b)
	{
		head = lst_b->head;
		second = lst_b->head->next;
		tmp = head->val;
		head->val = second->val;
		second->val = tmp;
	}
}

void	ft_lstswap_ss(t_list *lst_a, t_list *lst_b)
{
	if (lst_a && lst_b)
	{
		ft_lstswap_a(lst_a);
		ft_lstswap_b(lst_b);
	}
}
