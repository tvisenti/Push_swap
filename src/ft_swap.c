/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 11:23:23 by tvisenti          #+#    #+#             */
/*   Updated: 2016/06/07 12:13:48 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ps_ft_swap_a(t_list *lst_a, t_list *lst_b)
{
	int		tmp;

	if (lst_a->head == NULL || lst_a->head->next == NULL)
		return ;
	tmp = lst_a->head->val;
	lst_a->head->val = lst_a->head->next->val;
	lst_a->head->next->val = tmp;
	ps_ft_buf("sa ", lst_a, lst_b);
}

void	ps_ft_swap_b(t_list *lst_b, t_list *lst_a)
{
	int		tmp;

	if (lst_b->head == NULL || lst_b->head->next == NULL)
		return ;
	tmp = lst_b->head->val;
	lst_b->head->val = lst_b->head->next->val;
	lst_b->head->next->val = tmp;
	ps_ft_buf("sb ", lst_a, lst_b);
}

void	ps_ft_swap_ss(t_list *lst_a, t_list *lst_b)
{
	int		tmp_a;
	int		tmp_b;

	if (lst_a->head == NULL || lst_a->head->next == NULL ||
		lst_b->head == NULL || lst_b->head->next == NULL)
		return ;
	tmp_a = lst_a->head->val;
	lst_a->head->val = lst_a->head->next->val;
	lst_a->head->next->val = tmp_a;
	tmp_b = lst_b->head->val;
	lst_b->head->val = lst_b->head->next->val;
	lst_b->head->next->val = tmp_b;
	ps_ft_buf("ss ", lst_a, lst_b);
}
