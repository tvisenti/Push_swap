/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 11:23:23 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/20 10:58:04 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_swap_a(t_list *lst)
{
	int		tmp;

	if (lst->head == NULL || lst->head->next == NULL)
		return ;
	tmp = lst->head->val;
	lst->head->val = lst->head->next->val;
	lst->head->next->val = tmp;
	write(1, "sa ", 3);
}

void	ft_swap_b(t_list *lst)
{
	int		tmp;

	if (lst->head == NULL || lst->head->next == NULL)
		return ;
	tmp = lst->head->val;
	lst->head->val = lst->head->next->val;
	lst->head->next->val = tmp;
	write(1, "sb ", 3);
}

void	ft_swap_ss(t_list *lst_a, t_list *lst_b)
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
	write(1, "ss ", 3);
}
