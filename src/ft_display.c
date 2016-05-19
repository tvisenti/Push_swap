/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 08:25:41 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/19 09:09:42 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_manage_display(t_list *lst_a, t_list *lst_b)
{
	printf("======== FIRST DISPLAY=============\n");
	ft_display_a(lst_a);

	ft_lstswap_a(lst_a);
	printf("========== 1x SWAP A ==============\n");
	ft_display_a(lst_a);

	ft_push_a(lst_a, lst_b);
	ft_push_a(lst_a, lst_b);
	printf("=========== 2x PUSH A ===========\n");
	ft_display_a(lst_a);
	ft_display_b(lst_b);

	ft_lstswap_ss(lst_a, lst_b);
	printf("=========== 1x SWAP SS ===========\n");
	ft_display_a(lst_a);
	ft_display_b(lst_b);

	ft_push_b(lst_a, lst_b);
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
	int		i;
	t_node	*tmp_a;

	tmp_a = lst_a->head;
	printf("LST_A = \n");
	while (tmp_a)
	{
		printf("%d : %d\n", i++, tmp_a->val);
		tmp_a = tmp_a->next;
	}
}

void	ft_display_b(t_list *lst_b)
{
	int		i;
	t_node	*tmp_b;

	tmp_b = lst_b->head;
	printf("LST_B = \n");
	while (tmp_b)
	{
		printf("%d : %d\n", i++, tmp_b->val);
		tmp_b = tmp_b->next;
	}
}