/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 11:23:23 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/19 09:14:45 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_swap_a(t_list *lst_a)
{
	int		tmp;

	if (lst_a->head == NULL || lst_a->head->next == NULL)
		return ;
	tmp = lst_a->head->val;
	lst_a->head->val = lst_a->head->next->val;
	lst_a->head->next->val = tmp;

}

void	ft_swap_b(t_list *lst_b)
{
	int		tmp;

	if (lst_b->head == NULL || lst_b->head->next == NULL)
		return ;
	tmp = lst_b->head->val;
	lst_b->head->val = lst_b->head->next->val;
	lst_b->head->next->val = tmp;
}

void	ft_swap_ss(t_list *lst_a, t_list *lst_b)
{
	ft_swap_a(lst_a);
	ft_swap_b(lst_b);
}