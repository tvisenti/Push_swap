/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 08:25:41 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/19 11:18:55 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_manage_display(t_list *lst_a, t_list *lst_b)
{
	printf("======== FIRST DISPLAY=============\n");
	ft_display_a(lst_a);
	ft_display_b(lst_b);


	ft_swap_a(lst_a);
	printf("========== 1x SWAP A ==============\n");
	ft_display_a(lst_a);
	ft_display_b(lst_b);


	ft_push_b(lst_a, lst_b);
	ft_push_b(lst_a, lst_b);
	ft_push_b(lst_a, lst_b);
	printf("=========== 3x PUSH B ===========\n");
	ft_display_a(lst_a);
	ft_display_b(lst_b);

	// 
	// ft_rotate_rr(lst_a, lst_b);
	// printf("=========== 1x ROTATE RR ===========\n");
	// ft_display_a(lst_a);
	// ft_display_b(lst_b);


	ft_rev_rotate_rrr(lst_a, lst_b);
	printf("=========== 1x REV ROTATE RRR ===========\n");
	ft_display_a(lst_a);
	ft_display_b(lst_b);


	ft_swap_a(lst_a);
	printf("========== 1x SWAP A ==============\n");
	ft_display_a(lst_a);
	ft_display_b(lst_b);


	ft_push_a(lst_a, lst_b);
	ft_push_a(lst_a, lst_b);
	ft_push_a(lst_a, lst_b);
	printf("=========== 1x PUSH B ===========\n");
	ft_display_a(lst_a);
	ft_display_b(lst_b);
}

void	ft_error()
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_display_a(t_list *lst_a)
{
	t_node	*tmp_a;

	tmp_a = lst_a->head;
	printf("a :");
	while (tmp_a)
	{
		printf(" %d", tmp_a->val);
		tmp_a = tmp_a->next;
	}
	printf("\n");
}

void	ft_display_b(t_list *lst_b)
{
	t_node	*tmp_b;

	tmp_b = lst_b->head;
	printf("b :");
	while (tmp_b)
	{
		printf(" %d", tmp_b->val);
		tmp_b = tmp_b->next;
	}
	printf("\n");
}
